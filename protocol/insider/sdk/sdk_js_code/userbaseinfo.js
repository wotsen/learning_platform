// source: in_sdk_body_user.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.insider.sdk.UserBaseInfo');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');

goog.forwardDeclare('proto.insider.sdk.UserPermissson');
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
proto.insider.sdk.UserBaseInfo = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.insider.sdk.UserBaseInfo, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.insider.sdk.UserBaseInfo.displayName = 'proto.insider.sdk.UserBaseInfo';
}



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
proto.insider.sdk.UserBaseInfo.prototype.toObject = function(opt_includeInstance) {
  return proto.insider.sdk.UserBaseInfo.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.insider.sdk.UserBaseInfo} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.UserBaseInfo.toObject = function(includeInstance, msg) {
  var f, obj = {
    userName: jspb.Message.getFieldWithDefault(msg, 1, ""),
    userPass: jspb.Message.getFieldWithDefault(msg, 2, ""),
    permission: jspb.Message.getFieldWithDefault(msg, 3, 0),
    email: jspb.Message.getFieldWithDefault(msg, 4, ""),
    phone: jspb.Message.getFieldWithDefault(msg, 5, "")
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
 * @return {!proto.insider.sdk.UserBaseInfo}
 */
proto.insider.sdk.UserBaseInfo.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.insider.sdk.UserBaseInfo;
  return proto.insider.sdk.UserBaseInfo.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.insider.sdk.UserBaseInfo} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.insider.sdk.UserBaseInfo}
 */
proto.insider.sdk.UserBaseInfo.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setUserName(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setUserPass(value);
      break;
    case 3:
      var value = /** @type {!proto.insider.sdk.UserPermissson} */ (reader.readEnum());
      msg.setPermission(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setEmail(value);
      break;
    case 5:
      var value = /** @type {string} */ (reader.readString());
      msg.setPhone(value);
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
proto.insider.sdk.UserBaseInfo.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.insider.sdk.UserBaseInfo.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.insider.sdk.UserBaseInfo} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.UserBaseInfo.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getUserName();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getUserPass();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getPermission();
  if (f !== 0.0) {
    writer.writeEnum(
      3,
      f
    );
  }
  f = message.getEmail();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getPhone();
  if (f.length > 0) {
    writer.writeString(
      5,
      f
    );
  }
};


/**
 * optional string user_name = 1;
 * @return {string}
 */
proto.insider.sdk.UserBaseInfo.prototype.getUserName = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.insider.sdk.UserBaseInfo} returns this
 */
proto.insider.sdk.UserBaseInfo.prototype.setUserName = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional string user_pass = 2;
 * @return {string}
 */
proto.insider.sdk.UserBaseInfo.prototype.getUserPass = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * @param {string} value
 * @return {!proto.insider.sdk.UserBaseInfo} returns this
 */
proto.insider.sdk.UserBaseInfo.prototype.setUserPass = function(value) {
  return jspb.Message.setProto3StringField(this, 2, value);
};


/**
 * optional UserPermissson permission = 3;
 * @return {!proto.insider.sdk.UserPermissson}
 */
proto.insider.sdk.UserBaseInfo.prototype.getPermission = function() {
  return /** @type {!proto.insider.sdk.UserPermissson} */ (jspb.Message.getFieldWithDefault(this, 3, 0));
};


/**
 * @param {!proto.insider.sdk.UserPermissson} value
 * @return {!proto.insider.sdk.UserBaseInfo} returns this
 */
proto.insider.sdk.UserBaseInfo.prototype.setPermission = function(value) {
  return jspb.Message.setProto3EnumField(this, 3, value);
};


/**
 * optional string email = 4;
 * @return {string}
 */
proto.insider.sdk.UserBaseInfo.prototype.getEmail = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * @param {string} value
 * @return {!proto.insider.sdk.UserBaseInfo} returns this
 */
proto.insider.sdk.UserBaseInfo.prototype.setEmail = function(value) {
  return jspb.Message.setProto3StringField(this, 4, value);
};


/**
 * optional string phone = 5;
 * @return {string}
 */
proto.insider.sdk.UserBaseInfo.prototype.getPhone = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 5, ""));
};


/**
 * @param {string} value
 * @return {!proto.insider.sdk.UserBaseInfo} returns this
 */
proto.insider.sdk.UserBaseInfo.prototype.setPhone = function(value) {
  return jspb.Message.setProto3StringField(this, 5, value);
};

