// source: in_sdk_body_appmodule.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

goog.provide('proto.insider.sdk.AppModuleCoutInfoList');

goog.require('jspb.BinaryReader');
goog.require('jspb.BinaryWriter');
goog.require('jspb.Message');
goog.require('proto.insider.sdk.AppModuleCoutInfo');

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
proto.insider.sdk.AppModuleCoutInfoList = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.insider.sdk.AppModuleCoutInfoList.repeatedFields_, null);
};
goog.inherits(proto.insider.sdk.AppModuleCoutInfoList, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.insider.sdk.AppModuleCoutInfoList.displayName = 'proto.insider.sdk.AppModuleCoutInfoList';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.insider.sdk.AppModuleCoutInfoList.repeatedFields_ = [1];



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
proto.insider.sdk.AppModuleCoutInfoList.prototype.toObject = function(opt_includeInstance) {
  return proto.insider.sdk.AppModuleCoutInfoList.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.insider.sdk.AppModuleCoutInfoList} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.AppModuleCoutInfoList.toObject = function(includeInstance, msg) {
  var f, obj = {
    appModulesList: jspb.Message.toObjectList(msg.getAppModulesList(),
    proto.insider.sdk.AppModuleCoutInfo.toObject, includeInstance)
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
 * @return {!proto.insider.sdk.AppModuleCoutInfoList}
 */
proto.insider.sdk.AppModuleCoutInfoList.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.insider.sdk.AppModuleCoutInfoList;
  return proto.insider.sdk.AppModuleCoutInfoList.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.insider.sdk.AppModuleCoutInfoList} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.insider.sdk.AppModuleCoutInfoList}
 */
proto.insider.sdk.AppModuleCoutInfoList.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new proto.insider.sdk.AppModuleCoutInfo;
      reader.readMessage(value,proto.insider.sdk.AppModuleCoutInfo.deserializeBinaryFromReader);
      msg.addAppModules(value);
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
proto.insider.sdk.AppModuleCoutInfoList.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.insider.sdk.AppModuleCoutInfoList.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.insider.sdk.AppModuleCoutInfoList} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.insider.sdk.AppModuleCoutInfoList.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getAppModulesList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      proto.insider.sdk.AppModuleCoutInfo.serializeBinaryToWriter
    );
  }
};


/**
 * repeated AppModuleCoutInfo app_modules = 1;
 * @return {!Array<!proto.insider.sdk.AppModuleCoutInfo>}
 */
proto.insider.sdk.AppModuleCoutInfoList.prototype.getAppModulesList = function() {
  return /** @type{!Array<!proto.insider.sdk.AppModuleCoutInfo>} */ (
    jspb.Message.getRepeatedWrapperField(this, proto.insider.sdk.AppModuleCoutInfo, 1));
};


/**
 * @param {!Array<!proto.insider.sdk.AppModuleCoutInfo>} value
 * @return {!proto.insider.sdk.AppModuleCoutInfoList} returns this
*/
proto.insider.sdk.AppModuleCoutInfoList.prototype.setAppModulesList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.insider.sdk.AppModuleCoutInfo=} opt_value
 * @param {number=} opt_index
 * @return {!proto.insider.sdk.AppModuleCoutInfo}
 */
proto.insider.sdk.AppModuleCoutInfoList.prototype.addAppModules = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.insider.sdk.AppModuleCoutInfo, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.insider.sdk.AppModuleCoutInfoList} returns this
 */
proto.insider.sdk.AppModuleCoutInfoList.prototype.clearAppModulesList = function() {
  return this.setAppModulesList([]);
};

