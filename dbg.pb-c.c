/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: dbg.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "dbg.pb-c.h"
void   dbg__sys_info__init
                     (Dbg__SysInfo         *message)
{
  static Dbg__SysInfo init_value = DBG__SYS_INFO__INIT;
  *message = init_value;
}
size_t dbg__sys_info__get_packed_size
                     (const Dbg__SysInfo *message)
{
  assert(message->base.descriptor == &dbg__sys_info__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dbg__sys_info__pack
                     (const Dbg__SysInfo *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dbg__sys_info__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dbg__sys_info__pack_to_buffer
                     (const Dbg__SysInfo *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dbg__sys_info__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Dbg__SysInfo *
       dbg__sys_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Dbg__SysInfo *)
     protobuf_c_message_unpack (&dbg__sys_info__descriptor,
                                allocator, len, data);
}
void   dbg__sys_info__free_unpacked
                     (Dbg__SysInfo *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &dbg__sys_info__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dbg__request__init
                     (Dbg__Request         *message)
{
  static Dbg__Request init_value = DBG__REQUEST__INIT;
  *message = init_value;
}
size_t dbg__request__get_packed_size
                     (const Dbg__Request *message)
{
  assert(message->base.descriptor == &dbg__request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dbg__request__pack
                     (const Dbg__Request *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dbg__request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dbg__request__pack_to_buffer
                     (const Dbg__Request *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dbg__request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Dbg__Request *
       dbg__request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Dbg__Request *)
     protobuf_c_message_unpack (&dbg__request__descriptor,
                                allocator, len, data);
}
void   dbg__request__free_unpacked
                     (Dbg__Request *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &dbg__request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dbg__response__init
                     (Dbg__Response         *message)
{
  static Dbg__Response init_value = DBG__RESPONSE__INIT;
  *message = init_value;
}
size_t dbg__response__get_packed_size
                     (const Dbg__Response *message)
{
  assert(message->base.descriptor == &dbg__response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dbg__response__pack
                     (const Dbg__Response *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dbg__response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dbg__response__pack_to_buffer
                     (const Dbg__Response *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dbg__response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Dbg__Response *
       dbg__response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Dbg__Response *)
     protobuf_c_message_unpack (&dbg__response__descriptor,
                                allocator, len, data);
}
void   dbg__response__free_unpacked
                     (Dbg__Response *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &dbg__response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor dbg__sys_info__field_descriptors[1] =
{
  {
    "tick_count",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT64,
    0,   /* quantifier_offset */
    offsetof(Dbg__SysInfo, tick_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dbg__sys_info__field_indices_by_name[] = {
  0,   /* field[0] = tick_count */
};
static const ProtobufCIntRange dbg__sys_info__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor dbg__sys_info__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dbg.SysInfo",
  "SysInfo",
  "Dbg__SysInfo",
  "dbg",
  sizeof(Dbg__SysInfo),
  1,
  dbg__sys_info__field_descriptors,
  dbg__sys_info__field_indices_by_name,
  1,  dbg__sys_info__number_ranges,
  (ProtobufCMessageInit) dbg__sys_info__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue dbg__request__type__enum_values_by_number[10] =
{
  { "SYSINFO", "DBG__REQUEST__TYPE__SYSINFO", 0 },
  { "REBOOT", "DBG__REQUEST__TYPE__REBOOT", 1 },
  { "MALLOC", "DBG__REQUEST__TYPE__MALLOC", 2 },
  { "FREE", "DBG__REQUEST__TYPE__FREE", 3 },
  { "MEM_READ", "DBG__REQUEST__TYPE__MEM_READ", 4 },
  { "MEM_WRITE", "DBG__REQUEST__TYPE__MEM_WRITE", 5 },
  { "DEBUG_PRINT", "DBG__REQUEST__TYPE__DEBUG_PRINT", 6 },
  { "SHOW_DEBUG_SCREEN", "DBG__REQUEST__TYPE__SHOW_DEBUG_SCREEN", 7 },
  { "SHOW_FRONT_SCREEN", "DBG__REQUEST__TYPE__SHOW_FRONT_SCREEN", 8 },
  { "COUNT", "DBG__REQUEST__TYPE__COUNT", 9 },
};
static const ProtobufCIntRange dbg__request__type__value_ranges[] = {
{0, 0},{0, 10}
};
static const ProtobufCEnumValueIndex dbg__request__type__enum_values_by_name[10] =
{
  { "COUNT", 9 },
  { "DEBUG_PRINT", 6 },
  { "FREE", 3 },
  { "MALLOC", 2 },
  { "MEM_READ", 4 },
  { "MEM_WRITE", 5 },
  { "REBOOT", 1 },
  { "SHOW_DEBUG_SCREEN", 7 },
  { "SHOW_FRONT_SCREEN", 8 },
  { "SYSINFO", 0 },
};
const ProtobufCEnumDescriptor dbg__request__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "dbg.Request.Type",
  "Type",
  "Dbg__Request__Type",
  "dbg",
  10,
  dbg__request__type__enum_values_by_number,
  10,
  dbg__request__type__enum_values_by_name,
  1,
  dbg__request__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor dbg__request__field_descriptors[5] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Dbg__Request, type),
    &dbg__request__type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Dbg__Request, msg),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "address",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Dbg__Request, has_address),
    offsetof(Dbg__Request, address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Dbg__Request, has_size),
    offsetof(Dbg__Request, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Dbg__Request, has_value),
    offsetof(Dbg__Request, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dbg__request__field_indices_by_name[] = {
  2,   /* field[2] = address */
  1,   /* field[1] = msg */
  3,   /* field[3] = size */
  0,   /* field[0] = type */
  4,   /* field[4] = value */
};
static const ProtobufCIntRange dbg__request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor dbg__request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dbg.Request",
  "Request",
  "Dbg__Request",
  "dbg",
  sizeof(Dbg__Request),
  5,
  dbg__request__field_descriptors,
  dbg__request__field_indices_by_name,
  1,  dbg__request__number_ranges,
  (ProtobufCMessageInit) dbg__request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue dbg__response__type__enum_values_by_number[3] =
{
  { "OK", "DBG__RESPONSE__TYPE__OK", 0 },
  { "ERROR_UNSUPPORTED", "DBG__RESPONSE__TYPE__ERROR_UNSUPPORTED", 1 },
  { "ERROR_INCOMPLETE_REQUEST", "DBG__RESPONSE__TYPE__ERROR_INCOMPLETE_REQUEST", 2 },
};
static const ProtobufCIntRange dbg__response__type__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex dbg__response__type__enum_values_by_name[3] =
{
  { "ERROR_INCOMPLETE_REQUEST", 2 },
  { "ERROR_UNSUPPORTED", 1 },
  { "OK", 0 },
};
const ProtobufCEnumDescriptor dbg__response__type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "dbg.Response.Type",
  "Type",
  "Dbg__Response__Type",
  "dbg",
  3,
  dbg__response__type__enum_values_by_number,
  3,
  dbg__response__type__enum_values_by_name,
  1,
  dbg__response__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor dbg__response__field_descriptors[6] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Dbg__Response, type),
    &dbg__response__type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Dbg__Response, msg),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "info",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Dbg__Response, info),
    &dbg__sys_info__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "address",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Dbg__Response, has_address),
    offsetof(Dbg__Response, address),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(Dbg__Response, has_size),
    offsetof(Dbg__Response, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "value",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT64,
    offsetof(Dbg__Response, has_value),
    offsetof(Dbg__Response, value),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dbg__response__field_indices_by_name[] = {
  3,   /* field[3] = address */
  2,   /* field[2] = info */
  1,   /* field[1] = msg */
  4,   /* field[4] = size */
  0,   /* field[0] = type */
  5,   /* field[5] = value */
};
static const ProtobufCIntRange dbg__response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor dbg__response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dbg.Response",
  "Response",
  "Dbg__Response",
  "dbg",
  sizeof(Dbg__Response),
  6,
  dbg__response__field_descriptors,
  dbg__response__field_indices_by_name,
  1,  dbg__response__number_ranges,
  (ProtobufCMessageInit) dbg__response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
