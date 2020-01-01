# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: in_sdk_footer.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='in_sdk_footer.proto',
  package='insider.sdk',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x13in_sdk_footer.proto\x12\x0binsider.sdk\"K\n\tSdkResult\x12\x30\n\x0bstatus_code\x18\x01 \x01(\x0e\x32\x1b.insider.sdk.ResponseResult\x12\x0c\n\x04\x63ode\x18\x02 \x01(\t\"O\n\rContentResult\x12\x30\n\x0bstatus_code\x18\x01 \x01(\x0e\x32\x1b.insider.sdk.ContentResultE\x12\x0c\n\x04\x63ode\x18\x02 \x01(\t\"h\n\x06Result\x12*\n\nsdk_result\x18\x01 \x01(\x0b\x32\x16.insider.sdk.SdkResult\x12\x32\n\x0e\x63ontent_result\x18\x02 \x01(\x0b\x32\x1a.insider.sdk.ContentResult\":\n\x06\x46ooter\x12\x0b\n\x03res\x18\x01 \x01(\x05\x12#\n\x06result\x18\x02 \x01(\x0b\x32\x13.insider.sdk.Result*\xdc\x01\n\x0e\x43ontentResultE\x12\r\n\tR_CODE_OK\x10\x00\x12\x10\n\x0cR_CODE_ERROR\x10\x01\x12\x15\n\x11R_CODE_USER_EXIST\x10\x02\x12\x1d\n\x19R_CODE_USER_TOKEN_TIMEOUT\x10\x03\x12\x19\n\x15R_CODE_USER_NOT_EXIST\x10\x04\x12\x1d\n\x19R_CODE_USER_IN_BLACK_LIST\x10\x05\x12\x1d\n\x19R_CODE_USER_NO_PERMISSION\x10\x06\x12\x1a\n\x16R_CODE_USER_PASS_ERROR\x10\x07*#\n\x0eResponseResult\x12\x06\n\x02OK\x10\x00\x12\t\n\x05\x45RROR\x10\x01\x62\x06proto3')
)

_CONTENTRESULTE = _descriptor.EnumDescriptor(
  name='ContentResultE',
  full_name='insider.sdk.ContentResultE',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='R_CODE_OK', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_ERROR', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_EXIST', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_TOKEN_TIMEOUT', index=3, number=3,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_NOT_EXIST', index=4, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_IN_BLACK_LIST', index=5, number=5,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_NO_PERMISSION', index=6, number=6,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='R_CODE_USER_PASS_ERROR', index=7, number=7,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=361,
  serialized_end=581,
)
_sym_db.RegisterEnumDescriptor(_CONTENTRESULTE)

ContentResultE = enum_type_wrapper.EnumTypeWrapper(_CONTENTRESULTE)
_RESPONSERESULT = _descriptor.EnumDescriptor(
  name='ResponseResult',
  full_name='insider.sdk.ResponseResult',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='OK', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ERROR', index=1, number=1,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=583,
  serialized_end=618,
)
_sym_db.RegisterEnumDescriptor(_RESPONSERESULT)

ResponseResult = enum_type_wrapper.EnumTypeWrapper(_RESPONSERESULT)
R_CODE_OK = 0
R_CODE_ERROR = 1
R_CODE_USER_EXIST = 2
R_CODE_USER_TOKEN_TIMEOUT = 3
R_CODE_USER_NOT_EXIST = 4
R_CODE_USER_IN_BLACK_LIST = 5
R_CODE_USER_NO_PERMISSION = 6
R_CODE_USER_PASS_ERROR = 7
OK = 0
ERROR = 1



_SDKRESULT = _descriptor.Descriptor(
  name='SdkResult',
  full_name='insider.sdk.SdkResult',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status_code', full_name='insider.sdk.SdkResult.status_code', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='code', full_name='insider.sdk.SdkResult.code', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=36,
  serialized_end=111,
)


_CONTENTRESULT = _descriptor.Descriptor(
  name='ContentResult',
  full_name='insider.sdk.ContentResult',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='status_code', full_name='insider.sdk.ContentResult.status_code', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='code', full_name='insider.sdk.ContentResult.code', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=113,
  serialized_end=192,
)


_RESULT = _descriptor.Descriptor(
  name='Result',
  full_name='insider.sdk.Result',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='sdk_result', full_name='insider.sdk.Result.sdk_result', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='content_result', full_name='insider.sdk.Result.content_result', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=194,
  serialized_end=298,
)


_FOOTER = _descriptor.Descriptor(
  name='Footer',
  full_name='insider.sdk.Footer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='res', full_name='insider.sdk.Footer.res', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='result', full_name='insider.sdk.Footer.result', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=300,
  serialized_end=358,
)

_SDKRESULT.fields_by_name['status_code'].enum_type = _RESPONSERESULT
_CONTENTRESULT.fields_by_name['status_code'].enum_type = _CONTENTRESULTE
_RESULT.fields_by_name['sdk_result'].message_type = _SDKRESULT
_RESULT.fields_by_name['content_result'].message_type = _CONTENTRESULT
_FOOTER.fields_by_name['result'].message_type = _RESULT
DESCRIPTOR.message_types_by_name['SdkResult'] = _SDKRESULT
DESCRIPTOR.message_types_by_name['ContentResult'] = _CONTENTRESULT
DESCRIPTOR.message_types_by_name['Result'] = _RESULT
DESCRIPTOR.message_types_by_name['Footer'] = _FOOTER
DESCRIPTOR.enum_types_by_name['ContentResultE'] = _CONTENTRESULTE
DESCRIPTOR.enum_types_by_name['ResponseResult'] = _RESPONSERESULT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SdkResult = _reflection.GeneratedProtocolMessageType('SdkResult', (_message.Message,), {
  'DESCRIPTOR' : _SDKRESULT,
  '__module__' : 'in_sdk_footer_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.SdkResult)
  })
_sym_db.RegisterMessage(SdkResult)

ContentResult = _reflection.GeneratedProtocolMessageType('ContentResult', (_message.Message,), {
  'DESCRIPTOR' : _CONTENTRESULT,
  '__module__' : 'in_sdk_footer_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.ContentResult)
  })
_sym_db.RegisterMessage(ContentResult)

Result = _reflection.GeneratedProtocolMessageType('Result', (_message.Message,), {
  'DESCRIPTOR' : _RESULT,
  '__module__' : 'in_sdk_footer_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.Result)
  })
_sym_db.RegisterMessage(Result)

Footer = _reflection.GeneratedProtocolMessageType('Footer', (_message.Message,), {
  'DESCRIPTOR' : _FOOTER,
  '__module__' : 'in_sdk_footer_pb2'
  # @@protoc_insertion_point(class_scope:insider.sdk.Footer)
  })
_sym_db.RegisterMessage(Footer)


# @@protoc_insertion_point(module_scope)
