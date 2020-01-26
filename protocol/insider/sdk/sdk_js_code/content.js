// source: in_sdk_body.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.insider.sdk.Content');
goog.provide('proto.insider.sdk.Content.ContentoneofCase');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.insider.sdk.AppModuleCoutInfoList');
goog.require('proto.insider.sdk.UserList');

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.insider.sdk.Content = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.insider.sdk.Content.oneofGroups_);
};
goog.inherits(proto.insider.sdk.Content, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.insider.sdk.Content.displayName = 'proto.insider.sdk.Content';
}

/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.insider.sdk.Content.oneofGroups_ = [[2,3]];

/**
 * @enum {number}
 */
proto.insider.sdk.Content.ContentoneofCase = {
  CONTENTONEOF_NOT_SET: 0,
  APP_MODULE_LIST: 2,
  USER_LIST: 3
};

/**
 * @return {proto.insider.sdk.Content.ContentoneofCase}
 */
proto.insider.sdk.Content.prototype.getContentoneofCase = function() {
  return /** @type {proto.insider.sdk.Content.ContentoneofCase} */(jspb.Message.computeOneofCase(this, proto.insider.sdk.Content.oneofGroups_[0]));
};



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.insider.sdk.Content.prototype.toObject = function(opt_includeInstance) {
  return proto.insider.sdk.Content.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.insider.sdk.Content} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.Content.toObject = function(includeInstance, msg) {
  var f, obj = {
    magic: jspb.Message.getFieldWithDefault(msg, 1, 0),
    appModuleList: (f = msg.getAppModuleList()) && proto.insider.sdk.AppModuleCoutInfoList.toObject(includeInstance, f),
    userList: (f = msg.getUserList()) && proto.insider.sdk.UserList.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.insider.sdk.Content}
 */
proto.insider.sdk.Content.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.insider.sdk.Content;
  return proto.insider.sdk.Content.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.insider.sdk.Content} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.insider.sdk.Content}
 */
proto.insider.sdk.Content.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt64());
      msg.setMagic(value);
      break;
    case 2:
      var value = new proto.insider.sdk.AppModuleCoutInfoList;
      reader.readMessage(value,proto.insider.sdk.AppModuleCoutInfoList.deserializeBinaryFromReader);
      msg.setAppModuleList(value);
      break;
    case 3:
      var value = new proto.insider.sdk.UserList;
      reader.readMessage(value,proto.insider.sdk.UserList.deserializeBinaryFromReader);
      msg.setUserList(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.insider.sdk.Content.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.insider.sdk.Content.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.insider.sdk.Content} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.Content.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getMagic();
  if (f !== 0) {
    writer.writeInt64(
      1,
      f
    );
  }
  f = message.getAppModuleList();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.insider.sdk.AppModuleCoutInfoList.serializeBinaryToWriter
    );
  }
  f = message.getUserList();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      proto.insider.sdk.UserList.serializeBinaryToWriter
    );
  }
};


/**
 * optional int64 magic = 1;
 * @return {number}
 */
proto.insider.sdk.Content.prototype.getMagic = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 1, 0));
};


/**
 * @param {number} value
 * @return {!proto.insider.sdk.Content} returns this
 */
proto.insider.sdk.Content.prototype.setMagic = function(value) {
  return jspb.Message.setProto3IntField(this, 1, value);
};


/**
 * optional AppModuleCoutInfoList app_module_list = 2;
 * @return {?proto.insider.sdk.AppModuleCoutInfoList}
 */
proto.insider.sdk.Content.prototype.getAppModuleList = function() {
  return /** @type{?proto.insider.sdk.AppModuleCoutInfoList} */ (
    jspb.Message.getWrapperField(this, proto.insider.sdk.AppModuleCoutInfoList, 2));
};


/**
 * @param {?proto.insider.sdk.AppModuleCoutInfoList|undefined} value
 * @return {!proto.insider.sdk.Content} returns this
*/
proto.insider.sdk.Content.prototype.setAppModuleList = function(value) {
  return jspb.Message.setOneofWrapperField(this, 2, proto.insider.sdk.Content.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.insider.sdk.Content} returns this
 */
proto.insider.sdk.Content.prototype.clearAppModuleList = function() {
  return this.setAppModuleList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.insider.sdk.Content.prototype.hasAppModuleList = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional UserList user_list = 3;
 * @return {?proto.insider.sdk.UserList}
 */
proto.insider.sdk.Content.prototype.getUserList = function() {
  return /** @type{?proto.insider.sdk.UserList} */ (
    jspb.Message.getWrapperField(this, proto.insider.sdk.UserList, 3));
};


/**
 * @param {?proto.insider.sdk.UserList|undefined} value
 * @return {!proto.insider.sdk.Content} returns this
*/
proto.insider.sdk.Content.prototype.setUserList = function(value) {
  return jspb.Message.setOneofWrapperField(this, 3, proto.insider.sdk.Content.oneofGroups_[0], value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.insider.sdk.Content} returns this
 */
proto.insider.sdk.Content.prototype.clearUserList = function() {
  return this.setUserList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.insider.sdk.Content.prototype.hasUserList = function() {
  return jspb.Message.getField(this, 3) != null;
};


