# coding=utf-8
import json
from flask import Flask, jsonify, request
from flask_cors import CORS
from .entities.entity import Session, engine, Base
from .entities.exam import Exam, ExamSchema

###################################################
from .entities.phone_book import PhoneBook, PhoneBookSchema
###################################################

app = Flask(__name__)

CORS(app)

# generate database schema
Base.metadata.create_all(engine)

@app.route('/updatePhone',methods=["POST"])
def update_phone():
    requestData = request.get_json()
    print(requestData)

    _targetId = requestData.get('targetId')
    _name = requestData.get('name')
    _phone = requestData.get('phone')

    session = Session()

    new_phone = PhoneBook(name=_name, phone=_phone, created_by="형철")
    new_phone.id = _targetId
    session.merge(new_phone)
    '''
    session.query(PhoneBook).filter_by(id=_targetId)\
    .update({'name':_name,'phone':_phone})
    '''
    session.commit()
    session.close()
    return 'OK',200


@app.route('/deletePhone', methods=["POST"])
def delete_phone():
    requestData = request.get_json()
    print(requestData)

    _targetId = requestData.get('targetId')

    session = Session()
    session.query(PhoneBook).filter_by(id=_targetId).delete()
    '''
    select * from phone_book where id = _targetId
    delete from phone_book where id = _targetId
    '''
    session.commit()
    session.close()

    return 'OK',200

@app.route('/addPhone', methods=["POST"])
def add_phone():
    requestData = request.get_json()
    print(requestData)

    _name = requestData.get('name')
    _phone = requestData.get('phone')

    new_phone = PhoneBook(name=_name, phone=_phone, created_by="김형철")

    session = Session()
    session.add(new_phone)
    session.commit()
    session.close()

    return "OK", 200

@app.route('/phones')
def get_phone():
    session = Session()
    phone_objects = session.query(PhoneBook).all()
    schema = PhoneBookSchema(many=True)
    phones = schema.dump(phone_objects)
    session.close()
    return jsonify(phones), 200

@app.route('/exams')
def get_exam():
    session = Session()
    exam_objects = session.query(Exam).all()
    schema = ExamSchema(many=True)
    exams = schema.dump(exam_objects)
    session.close()
    return jsonify(exams), 200



# DB에 로그인 하는 부분 
session = Session()
'''
exams = session.query(Exam).all()


if len(exams) == 0:
    # create and persist dummy exam
    python_exam = Exam("Kim tae seong", "hpc tech team", "E640025")
    session.add(python_exam)
    session.commit()
    session.close()

    # reload exams
    exams = session.query(Exam).all()

print('### Exams:')

examSchema = ExamSchema(many=True)
examJson = examSchema.dump(exams)

print(json.dumps(examJson))
'''
phonebook = session.query(PhoneBook).all()
if len(phonebook) == 0:
    # create and persist dummy exam
    python_phone = PhoneBook(name="김형철", phone="01041211745", created_by="김형철")
    session.add(python_phone)
    session.commit()
    session.close()

    # reload exams
    phonebook = session.query(PhoneBook).all()

print('### Exams:')

phoneSchema = PhoneBookSchema(many=True)
examJson2 = phoneSchema.dump(phonebook)

print(json.dumps(examJson2))


# DB 로그아웃
session.close()