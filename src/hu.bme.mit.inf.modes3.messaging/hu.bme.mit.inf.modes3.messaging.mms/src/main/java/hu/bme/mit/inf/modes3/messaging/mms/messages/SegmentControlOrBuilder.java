// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SegmentControl.proto

package hu.bme.mit.inf.modes3.messaging.mms.messages;

public interface SegmentControlOrBuilder extends
    // @@protoc_insertion_point(interface_extends:SegmentControl)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>optional uint32 segmentID = 1;</code>
   */
  int getSegmentID();

  /**
   * <code>optional .SegmentControl.ControlState controlState = 2;</code>
   */
  int getControlStateValue();
  /**
   * <code>optional .SegmentControl.ControlState controlState = 2;</code>
   */
  hu.bme.mit.inf.modes3.messaging.mms.messages.SegmentControl.ControlState getControlState();
}