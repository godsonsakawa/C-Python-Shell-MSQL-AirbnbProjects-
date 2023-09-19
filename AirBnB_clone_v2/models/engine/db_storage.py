#!/usr/bin/python3
"""This module defines a class to manage db storage for hbnb clones."""
from os import getenv
from models.base_model import BaseModel, Base
from models.city import City
from models.state import State
from models.user import User
from models.amenity import Amenity
from models.place import Place
from models.review import Review
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker, scoped_session, relationship


class DBStorage:
    """
    Represents a db storage engine.
    Attributes:
        __engine (sqlalchemy.Engine): The working sqlalchemy engine.
        __session (sqlalchemy.Session): The working SQLalchemy session.
    """
    __engine = None
    __session = None

    def __init__(self):
        """
        Initialize a new DBStorage instance.
        Creates the engine and session for the db storage.
        """
        dialect = "mysql"
        driver = "mysqldb"
        user = getenv('HBNB_MYSQL_USER')
        password = getenv('HBNB_MYSQL_PWD')
        host = getenv('HBNB_MYSQL_HOST')
        database = getenv('HBNB_MYSQL_DB')
        self.__engine = create_engine('{}+{}://{}:{}@{}/{}'
                                      .format(dialect, driver, user, password,
                                              host, database),
                                      pool_pre_ping=True)
        
        if getenv('HBNB_ENV') == 'test':
            Base.metadata.drop_all(bind=self.__engine)

    def all(self, cls=None):
        """
        Query all objects of the given class name from the db.
        """
        objects = {}
        if cls:
            for obj in self.__session.query(eval(cls)).all():
                objects[obj.__class__.__name__ + "." + obj.id] = obj
        else:
            classes = ["State", "City", "User", "Place", "Review", "Amenity"]
            for c in classes:
                for obj in self.__session.query(eval(c)).all():
                    objects[obj.__class.__.name + "." + obj.id] = obj
        return objects

    def new(self, obj):
        """Add the given object to the db session."""
        self.__session.add(obj)

    def save(self):
        """Commit all the changes to the db session."""
        self.__session.commit()

    def delete(self, obj=None):
        """Delete the given object from the db session."""
        if obj:
            self.__session.delete(obj)

    def reload(self):
        """Create all tables in the db and create a new session."""
        Base.metadata.create_all(self.__engine)
        session_factory = sessionmaker(bind=self.__engine,
                                       expire_on_commit=False)
        self.__session = scoped_session(session_factory)

