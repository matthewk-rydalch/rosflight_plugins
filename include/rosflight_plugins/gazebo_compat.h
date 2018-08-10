#ifndef GAZEBO_COMPAT_H //Include guard
#define GAZEBO_COMPAT_H

#if GAZEBO_MAJOR_VERSION >= 8

#define GazeboVector ignition::math::Vector3d
#define GET_X(VECTOR) VECTOR.X()
#define GET_Y(VECTOR) VECTOR.Y()
#define GET_Z(VECTOR) VECTOR.Z()
#define GET_W(VECTOR) VECTOR.W() //For quaternions
#define SET_X(VECTOR,VALUE) VECTOR.X(VALUE)
#define SET_Y(VECTOR,VALUE) VECTOR.Y(VALUE)
#define SET_Z(VECTOR,VALUE) VECTOR.Z(VALUE)
#define SET_W(VECTOR,VALUE) VECTOR.W(VALUE)
#define GET_POS(POSE) POSE.Pos()
#define GET_ROT(POSE) POSE.Rot()
#define GET_EULER(QUAT) QUAT.Euler()
#define GET_SIM_TIME(WORLD_PTR) WORLD_PTR->SimTime()
#define GET_RELATIVE_LINEAR_VEL(LINK_PTR) LINK_PTR->RelativeLinearVel()
#define GET_WORLD_COG_POSE(LINK_PTR) LINK_PTR->WorldCoGPose()

#else //I.E. GAZEBO_MAJOR_VERSION < 8

#define GazeboVector gazebo::math::Vector3
#define GET_X(VECTOR) VECTOR.x
#define GET_Y(VECTOR) VECTOR.y
#define GET_Z(VECTOR) VECTOR.z
#define GET_W(VECTOR) VECTOR.w //For quaternions
#define SET_X(VECTOR,VALUE) VECTOR.x = VALUE
#define SET_Y(VECTOR,VALUE) VECTOR.y = VALUE
#define SET_Z(VECTOR,VALUE) VECTOR.z = VALUE
#define SET_W(VECTOR,VALUE) VECTOR.w = VALUE
#define GET_POS(POSE) POSE.pos
#define GET_ROT(POSE) POSE.rot
#define GET_EULER(QUAT) QUAT.GetAsEuler()
#define GET_SIM_TIME(WORLD_PTR) WORLD_PTR->GetSimTime()
#define GET_RELATIVE_LINEAR_VEL(LINK_PTR) LINK_PTR->GetRelativeLinearVel()
#define GET_WORLD_COG_POSE(LINK_PTR) LINK_PTR->GetWorldCoGPose()

#endif //GAZEBO_MAJOR_VERSION >= 8

#endif //Include guard