#!/usr/bin/python3
""" State Module for HBNB project """
from os import getenv
from models.base_model import BaseModel, Base
from models.city import City
from sqlalchemy import Column, String
from sqlalchemy.orm import relationship, backref


class State(BaseModel, Base):
    """Represents a state for the MySQL db.
    Inherits from SQLAlchemy Base and links to the MYSQL table states.
    Attributes:
        __tablename__(str): The name of the MySQl table to store states.
        name (sqlalchemy String): The name of the state.
        cities (sqlalchemy relationship): The State-City relationship.
    """
    __tablename__ = "states"
    name = Column(String(128), nullable=False)

    if getenv('HBNB_TYPE_STORAGE') == "db":
        cities = relationship("City", cascade="all, delete", backref="state")
    else:
        @property
        def cities(self):
            """The getter attribute that returns the list
            of city instances with state_id equals to the current State.id
            """
            city_list = []
            for city in models.storage.all(City).values():
                if city.state_id == self.id:
                    city_list.append(city)
            return city_list
