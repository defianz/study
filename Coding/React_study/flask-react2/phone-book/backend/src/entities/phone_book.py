# coding=utf-8
from sqlalchemy import Column, String
from .entity import Entity, Base
from marshmallow import Schema, fields

class PhoneBook(Entity, Base):
    __tablename__ = 'phone_book'

    name = Column(String)
    phone = Column(String)

    def __init__(self, name, phone, created_by):
        Entity.__init__(self, created_by)
        self.name = name
        self.phone = phone

class PhoneBookSchema(Schema):
    id = fields.Number()
    name = fields.Str()
    phone = fields.Str()
    created_at = fields.DateTime()
    updated_at = fields.DateTime()
    last_updated_by = fields.Str()