
from xml.etree.ElementTree import Element, dump, SubElement
from xml.etree.ElementTree import ElementTree, parse

note = Element("note")
note.attrib["date"] = "20191207"

to = Element("to")
to.text = "Tove"
note.append(to)

SubElement(note, "from").text = "Jani"
SubElement(note, "heading").text = "Reminder"
SubElement(note, "body").text = "Don't forget me this weekend!"


def indent(elem, level=0):
    i = "\n"+level*" "
    if len(elem):
        if not elem.text or not elem.text.strip():
            elem.text = i + " "
        if not elem.tail or elem.tail.strip():
            elem.tail = i
        for elem in elem:
            indent(elem, level+1)
        if not elem.tail or not elem.tail.strip():
            elem.tail = i
    else:
        if level and (not elem.tail or not elem.tail.strip()):
            elem.tail = i


indent(note)
# note.append(to)
dump(note)
# ElementTree(note).write("note.xml")

tree = parse("note.xml")
note = tree.getroot()

print(note.get("date"))
print(note.get("foo", "default"))
print(note.keys())
print(note.items())


from_tag = note.find("from")
from_tags = note.findall("from")
from_text = note.findtext("from")

print(from_tag)
print(from_tags)
print(from_text)
