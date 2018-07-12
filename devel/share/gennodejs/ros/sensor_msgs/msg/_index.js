
"use strict";

let BatteryState = require('./BatteryState.js');
let PointField = require('./PointField.js');
let Imu = require('./Imu.js');
let FluidPressure = require('./FluidPressure.js');
let MagneticField = require('./MagneticField.js');
let MultiEchoLaserScan = require('./MultiEchoLaserScan.js');
let JoyFeedbackArray = require('./JoyFeedbackArray.js');
let PointCloud2 = require('./PointCloud2.js');
let TimeReference = require('./TimeReference.js');
let RelativeHumidity = require('./RelativeHumidity.js');
let LaserEcho = require('./LaserEcho.js');
let NavSatStatus = require('./NavSatStatus.js');
let Illuminance = require('./Illuminance.js');
let RegionOfInterest = require('./RegionOfInterest.js');
let NavSatFix = require('./NavSatFix.js');
let Range = require('./Range.js');
let CameraInfo = require('./CameraInfo.js');
let PointCloud = require('./PointCloud.js');
let Image = require('./Image.js');
let Joy = require('./Joy.js');
let ChannelFloat32 = require('./ChannelFloat32.js');
let Temperature = require('./Temperature.js');
let CompressedImage = require('./CompressedImage.js');
let JointState = require('./JointState.js');
let JoyFeedback = require('./JoyFeedback.js');
let LaserScan = require('./LaserScan.js');
let MultiDOFJointState = require('./MultiDOFJointState.js');

module.exports = {
  BatteryState: BatteryState,
  PointField: PointField,
  Imu: Imu,
  FluidPressure: FluidPressure,
  MagneticField: MagneticField,
  MultiEchoLaserScan: MultiEchoLaserScan,
  JoyFeedbackArray: JoyFeedbackArray,
  PointCloud2: PointCloud2,
  TimeReference: TimeReference,
  RelativeHumidity: RelativeHumidity,
  LaserEcho: LaserEcho,
  NavSatStatus: NavSatStatus,
  Illuminance: Illuminance,
  RegionOfInterest: RegionOfInterest,
  NavSatFix: NavSatFix,
  Range: Range,
  CameraInfo: CameraInfo,
  PointCloud: PointCloud,
  Image: Image,
  Joy: Joy,
  ChannelFloat32: ChannelFloat32,
  Temperature: Temperature,
  CompressedImage: CompressedImage,
  JointState: JointState,
  JoyFeedback: JoyFeedback,
  LaserScan: LaserScan,
  MultiDOFJointState: MultiDOFJointState,
};
