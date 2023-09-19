#!/usr/bin/python3
""" City Module for HBNB project """
from models.base_model import BaseModel, Base
from sqlalchemy import String, Column, ForeignKey
from sqlalchemy.orm import relationship


class City(BaseModel, Base):
    """ The city class, contains state ID and name.
    Attributes:
        __tablename__(str): name of the table to map in the db.
        name(str): name of the city. String 128 chars, cannot be null
        state_id(str): The id of the state city is in cant be null 60 chars
    """
    __tablename__ = "cities"
    state_id = Column(String(60), ForeignKey('states.id'), nullable=False)
    name = Column(String(128), nullable=False)

    places = relationship("Place", backref="cities", cascade="all, delete")
