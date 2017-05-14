# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: dbg.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='dbg.proto',
  package='dbg',
  serialized_pb=_b('\n\tdbg.proto\x12\x03\x64\x62g\"\x1d\n\x07SysInfo\x12\x12\n\ntick_count\x18\x01 \x02(\x03\"\x84\x02\n\x07Request\x12\x1f\n\x04type\x18\x01 \x02(\x0e\x32\x11.dbg.Request.Type\x12\x0b\n\x03msg\x18\x02 \x01(\t\x12\x0f\n\x07\x61\x64\x64ress\x18\x03 \x01(\x05\x12\x0c\n\x04size\x18\x04 \x01(\x05\x12\r\n\x05value\x18\x05 \x01(\x03\"\x9c\x01\n\x04Type\x12\x0b\n\x07SYSINFO\x10\x00\x12\n\n\x06REBOOT\x10\x01\x12\n\n\x06MALLOC\x10\x02\x12\x08\n\x04\x46REE\x10\x03\x12\x0c\n\x08MEM_READ\x10\x04\x12\r\n\tMEM_WRITE\x10\x05\x12\x0f\n\x0b\x44\x45\x42UG_PRINT\x10\x06\x12\x15\n\x11SHOW_DEBUG_SCREEN\x10\x07\x12\x15\n\x11SHOW_FRONT_SCREEN\x10\x08\x12\t\n\x05\x43OUNT\x10\t\"\xc8\x01\n\x08Response\x12 \n\x04type\x18\x01 \x02(\x0e\x32\x12.dbg.Response.Type\x12\x0b\n\x03msg\x18\x02 \x01(\t\x12\x1a\n\x04info\x18\x03 \x01(\x0b\x32\x0c.dbg.SysInfo\x12\x0f\n\x07\x61\x64\x64ress\x18\x04 \x01(\x05\x12\x0c\n\x04size\x18\x05 \x01(\x05\x12\r\n\x05value\x18\x06 \x01(\x03\"C\n\x04Type\x12\x06\n\x02OK\x10\x00\x12\x15\n\x11\x45RROR_UNSUPPORTED\x10\x01\x12\x1c\n\x18\x45RROR_INCOMPLETE_REQUEST\x10\x02')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)



_REQUEST_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='dbg.Request.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SYSINFO', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='REBOOT', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MALLOC', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FREE', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MEM_READ', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MEM_WRITE', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DEBUG_PRINT', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHOW_DEBUG_SCREEN', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHOW_FRONT_SCREEN', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COUNT', index=9, number=9,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=154,
  serialized_end=310,
)
_sym_db.RegisterEnumDescriptor(_REQUEST_TYPE)

_RESPONSE_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='dbg.Response.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OK', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERROR_UNSUPPORTED', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERROR_INCOMPLETE_REQUEST', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=446,
  serialized_end=513,
)
_sym_db.RegisterEnumDescriptor(_RESPONSE_TYPE)


_SYSINFO = _descriptor.Descriptor(
  name='SysInfo',
  full_name='dbg.SysInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tick_count', full_name='dbg.SysInfo.tick_count', index=0,
      number=1, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=18,
  serialized_end=47,
)


_REQUEST = _descriptor.Descriptor(
  name='Request',
  full_name='dbg.Request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='dbg.Request.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='msg', full_name='dbg.Request.msg', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='address', full_name='dbg.Request.address', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='size', full_name='dbg.Request.size', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='dbg.Request.value', index=4,
      number=5, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _REQUEST_TYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=50,
  serialized_end=310,
)


_RESPONSE = _descriptor.Descriptor(
  name='Response',
  full_name='dbg.Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='dbg.Response.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='msg', full_name='dbg.Response.msg', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='info', full_name='dbg.Response.info', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='address', full_name='dbg.Response.address', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='size', full_name='dbg.Response.size', index=4,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='dbg.Response.value', index=5,
      number=6, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _RESPONSE_TYPE,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=313,
  serialized_end=513,
)

_REQUEST.fields_by_name['type'].enum_type = _REQUEST_TYPE
_REQUEST_TYPE.containing_type = _REQUEST
_RESPONSE.fields_by_name['type'].enum_type = _RESPONSE_TYPE
_RESPONSE.fields_by_name['info'].message_type = _SYSINFO
_RESPONSE_TYPE.containing_type = _RESPONSE
DESCRIPTOR.message_types_by_name['SysInfo'] = _SYSINFO
DESCRIPTOR.message_types_by_name['Request'] = _REQUEST
DESCRIPTOR.message_types_by_name['Response'] = _RESPONSE

SysInfo = _reflection.GeneratedProtocolMessageType('SysInfo', (_message.Message,), dict(
  DESCRIPTOR = _SYSINFO,
  __module__ = 'dbg_pb2'
  # @@protoc_insertion_point(class_scope:dbg.SysInfo)
  ))
_sym_db.RegisterMessage(SysInfo)

Request = _reflection.GeneratedProtocolMessageType('Request', (_message.Message,), dict(
  DESCRIPTOR = _REQUEST,
  __module__ = 'dbg_pb2'
  # @@protoc_insertion_point(class_scope:dbg.Request)
  ))
_sym_db.RegisterMessage(Request)

Response = _reflection.GeneratedProtocolMessageType('Response', (_message.Message,), dict(
  DESCRIPTOR = _RESPONSE,
  __module__ = 'dbg_pb2'
  # @@protoc_insertion_point(class_scope:dbg.Response)
  ))
_sym_db.RegisterMessage(Response)


# @@protoc_insertion_point(module_scope)
