
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQQuaternion.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QQuaternion>
#include <QVector3D>
#include <QVector4D>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QQuaternion

//  Constructor QQuaternion::QQuaternion()


static void _init_ctor_QQuaternion_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QQuaternion> ();
}

static void _call_ctor_QQuaternion_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QQuaternion *> (new QQuaternion ());
}


//  Constructor QQuaternion::QQuaternion(double scalar, double xpos, double ypos, double zpos)


static void _init_ctor_QQuaternion_3960 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scalar");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("xpos");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("ypos");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("zpos");
  decl->add_arg<double > (argspec_3);
  decl->set_return_new<QQuaternion> ();
}

static void _call_ctor_QQuaternion_3960 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion *> (new QQuaternion (arg1, arg2, arg3, arg4));
}


//  Constructor QQuaternion::QQuaternion(double scalar, const QVector3D &vector)


static void _init_ctor_QQuaternion_3103 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scalar");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("vector");
  decl->add_arg<const QVector3D & > (argspec_1);
  decl->set_return_new<QQuaternion> ();
}

static void _call_ctor_QQuaternion_3103 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  const QVector3D &arg2 = gsi::arg_reader<const QVector3D & >() (args, heap);
  ret.write<QQuaternion *> (new QQuaternion (arg1, arg2));
}


//  Constructor QQuaternion::QQuaternion(const QVector4D &vector)


static void _init_ctor_QQuaternion_2141 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector4D & > (argspec_0);
  decl->set_return_new<QQuaternion> ();
}

static void _call_ctor_QQuaternion_2141 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector4D &arg1 = gsi::arg_reader<const QVector4D & >() (args, heap);
  ret.write<QQuaternion *> (new QQuaternion (arg1));
}


// QQuaternion QQuaternion::conjugate()


static void _init_f_conjugate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QQuaternion > ();
}

static void _call_f_conjugate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QQuaternion > ((QQuaternion)((QQuaternion *)cls)->conjugate ());
}


// bool QQuaternion::isIdentity()


static void _init_f_isIdentity_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isIdentity_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QQuaternion *)cls)->isIdentity ());
}


// bool QQuaternion::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QQuaternion *)cls)->isNull ());
}


// double QQuaternion::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->length ());
}


// double QQuaternion::lengthSquared()


static void _init_f_lengthSquared_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lengthSquared_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->lengthSquared ());
}


// void QQuaternion::normalize()


static void _init_f_normalize_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_normalize_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->normalize ();
}


// QQuaternion QQuaternion::normalized()


static void _init_f_normalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QQuaternion > ();
}

static void _call_f_normalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QQuaternion > ((QQuaternion)((QQuaternion *)cls)->normalized ());
}


// QQuaternion &QQuaternion::operator*=(double factor)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QQuaternion & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion & > ((QQuaternion &)((QQuaternion *)cls)->operator*= (arg1));
}


// QQuaternion &QQuaternion::operator*=(const QQuaternion &quaternion)


static void _init_f_operator_star__eq__2456 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quaternion");
  decl->add_arg<const QQuaternion & > (argspec_0);
  decl->set_return<QQuaternion & > ();
}

static void _call_f_operator_star__eq__2456 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QQuaternion &arg1 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  ret.write<QQuaternion & > ((QQuaternion &)((QQuaternion *)cls)->operator*= (arg1));
}


// QQuaternion &QQuaternion::operator+=(const QQuaternion &quaternion)


static void _init_f_operator_plus__eq__2456 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quaternion");
  decl->add_arg<const QQuaternion & > (argspec_0);
  decl->set_return<QQuaternion & > ();
}

static void _call_f_operator_plus__eq__2456 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QQuaternion &arg1 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  ret.write<QQuaternion & > ((QQuaternion &)((QQuaternion *)cls)->operator+= (arg1));
}


// QQuaternion &QQuaternion::operator-=(const QQuaternion &quaternion)


static void _init_f_operator_minus__eq__2456 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quaternion");
  decl->add_arg<const QQuaternion & > (argspec_0);
  decl->set_return<QQuaternion & > ();
}

static void _call_f_operator_minus__eq__2456 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QQuaternion &arg1 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  ret.write<QQuaternion & > ((QQuaternion &)((QQuaternion *)cls)->operator-= (arg1));
}


// QQuaternion &QQuaternion::operator/=(double divisor)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QQuaternion & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion & > ((QQuaternion &)((QQuaternion *)cls)->operator/= (arg1));
}


// QVector3D QQuaternion::rotatedVector(const QVector3D &vector)


static void _init_f_rotatedVector_c2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<QVector3D > ();
}

static void _call_f_rotatedVector_c2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  ret.write<QVector3D > ((QVector3D)((QQuaternion *)cls)->rotatedVector (arg1));
}


// double QQuaternion::scalar()


static void _init_f_scalar_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_scalar_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->scalar ());
}


// void QQuaternion::setScalar(double scalar)


static void _init_f_setScalar_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("scalar");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScalar_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setScalar (arg1);
}


// void QQuaternion::setVector(const QVector3D &vector)


static void _init_f_setVector_2140 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVector_2140 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setVector (arg1);
}


// void QQuaternion::setVector(double x, double y, double z)


static void _init_f_setVector_2997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("z");
  decl->add_arg<double > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_setVector_2997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setVector (arg1, arg2, arg3);
}


// void QQuaternion::setX(double x)


static void _init_f_setX_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setX (arg1);
}


// void QQuaternion::setY(double y)


static void _init_f_setY_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setY (arg1);
}


// void QQuaternion::setZ(double z)


static void _init_f_setZ_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("z");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setZ_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QQuaternion *)cls)->setZ (arg1);
}


// QVector4D QQuaternion::toVector4D()


static void _init_f_toVector4D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector4D > ();
}

static void _call_f_toVector4D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector4D > ((QVector4D)((QQuaternion *)cls)->toVector4D ());
}


// QVector3D QQuaternion::vector()


static void _init_f_vector_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_vector_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QQuaternion *)cls)->vector ());
}


// double QQuaternion::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->x ());
}


// double QQuaternion::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->y ());
}


// double QQuaternion::z()


static void _init_f_z_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_z_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QQuaternion *)cls)->z ());
}


// static QQuaternion QQuaternion::fromAxisAndAngle(const QVector3D &axis, double angle)


static void _init_f_fromAxisAndAngle_3103 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("axis");
  decl->add_arg<const QVector3D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("angle");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QQuaternion > ();
}

static void _call_f_fromAxisAndAngle_3103 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion > ((QQuaternion)QQuaternion::fromAxisAndAngle (arg1, arg2));
}


// static QQuaternion QQuaternion::fromAxisAndAngle(double x, double y, double z, double angle)


static void _init_f_fromAxisAndAngle_3960 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("z");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("angle");
  decl->add_arg<double > (argspec_3);
  decl->set_return<QQuaternion > ();
}

static void _call_f_fromAxisAndAngle_3960 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion > ((QQuaternion)QQuaternion::fromAxisAndAngle (arg1, arg2, arg3, arg4));
}


// static QQuaternion QQuaternion::nlerp(const QQuaternion &q1, const QQuaternion &q2, double t)


static void _init_f_nlerp_5767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("q1");
  decl->add_arg<const QQuaternion & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("q2");
  decl->add_arg<const QQuaternion & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("t");
  decl->add_arg<double > (argspec_2);
  decl->set_return<QQuaternion > ();
}

static void _call_f_nlerp_5767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QQuaternion &arg1 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  const QQuaternion &arg2 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion > ((QQuaternion)QQuaternion::nlerp (arg1, arg2, arg3));
}


// static QQuaternion QQuaternion::slerp(const QQuaternion &q1, const QQuaternion &q2, double t)


static void _init_f_slerp_5767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("q1");
  decl->add_arg<const QQuaternion & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("q2");
  decl->add_arg<const QQuaternion & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("t");
  decl->add_arg<double > (argspec_2);
  decl->set_return<QQuaternion > ();
}

static void _call_f_slerp_5767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QQuaternion &arg1 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  const QQuaternion &arg2 = gsi::arg_reader<const QQuaternion & >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  ret.write<QQuaternion > ((QQuaternion)QQuaternion::slerp (arg1, arg2, arg3));
}


//  const QQuaternion ::operator*(const QQuaternion &q1, const QQuaternion &q2)
static const QQuaternion op_QQuaternion_operator_star__4804(const QQuaternion *_self, const QQuaternion &q2) {
  return ::operator*(*_self, q2);
}

//  bool ::operator==(const QQuaternion &q1, const QQuaternion &q2)
static bool op_QQuaternion_operator_eq__eq__4804(const QQuaternion *_self, const QQuaternion &q2) {
  return ::operator==(*_self, q2);
}

//  bool ::operator!=(const QQuaternion &q1, const QQuaternion &q2)
static bool op_QQuaternion_operator_excl__eq__4804(const QQuaternion *_self, const QQuaternion &q2) {
  return ::operator!=(*_self, q2);
}

//  const QQuaternion ::operator+(const QQuaternion &q1, const QQuaternion &q2)
static const QQuaternion op_QQuaternion_operator_plus__4804(const QQuaternion *_self, const QQuaternion &q2) {
  return ::operator+(*_self, q2);
}

//  const QQuaternion ::operator-(const QQuaternion &q1, const QQuaternion &q2)
static const QQuaternion op_QQuaternion_operator_minus__4804(const QQuaternion *_self, const QQuaternion &q2) {
  return ::operator-(*_self, q2);
}

//  const QQuaternion ::operator*(const QQuaternion &quaternion, qreal factor)
static const QQuaternion op_QQuaternion_operator_star__3317(const QQuaternion *_self, qreal factor) {
  return ::operator*(*_self, factor);
}

//  const QQuaternion ::operator-(const QQuaternion &quaternion)
static const QQuaternion op_QQuaternion_operator_minus__2456(const QQuaternion *_self) {
  return ::operator-(*_self);
}

//  const QQuaternion ::operator/(const QQuaternion &quaternion, qreal divisor)
static const QQuaternion op_QQuaternion_operator_slash__3317(const QQuaternion *_self, qreal divisor) {
  return ::operator/(*_self, divisor);
}


namespace gsi
{

static gsi::Methods methods_QQuaternion () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QQuaternion::QQuaternion()\nThis method creates an object of class QQuaternion.", &_init_ctor_QQuaternion_0, &_call_ctor_QQuaternion_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QQuaternion::QQuaternion(double scalar, double xpos, double ypos, double zpos)\nThis method creates an object of class QQuaternion.", &_init_ctor_QQuaternion_3960, &_call_ctor_QQuaternion_3960);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QQuaternion::QQuaternion(double scalar, const QVector3D &vector)\nThis method creates an object of class QQuaternion.", &_init_ctor_QQuaternion_3103, &_call_ctor_QQuaternion_3103);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QQuaternion::QQuaternion(const QVector4D &vector)\nThis method creates an object of class QQuaternion.", &_init_ctor_QQuaternion_2141, &_call_ctor_QQuaternion_2141);
  methods += new qt_gsi::GenericMethod ("conjugate", "@brief Method QQuaternion QQuaternion::conjugate()\n", true, &_init_f_conjugate_c0, &_call_f_conjugate_c0);
  methods += new qt_gsi::GenericMethod ("isIdentity?", "@brief Method bool QQuaternion::isIdentity()\n", true, &_init_f_isIdentity_c0, &_call_f_isIdentity_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QQuaternion::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method double QQuaternion::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("lengthSquared", "@brief Method double QQuaternion::lengthSquared()\n", true, &_init_f_lengthSquared_c0, &_call_f_lengthSquared_c0);
  methods += new qt_gsi::GenericMethod ("normalize", "@brief Method void QQuaternion::normalize()\n", false, &_init_f_normalize_0, &_call_f_normalize_0);
  methods += new qt_gsi::GenericMethod ("normalized", "@brief Method QQuaternion QQuaternion::normalized()\n", true, &_init_f_normalized_c0, &_call_f_normalized_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QQuaternion &QQuaternion::operator*=(double factor)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QQuaternion &QQuaternion::operator*=(const QQuaternion &quaternion)\n", false, &_init_f_operator_star__eq__2456, &_call_f_operator_star__eq__2456);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QQuaternion &QQuaternion::operator+=(const QQuaternion &quaternion)\n", false, &_init_f_operator_plus__eq__2456, &_call_f_operator_plus__eq__2456);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QQuaternion &QQuaternion::operator-=(const QQuaternion &quaternion)\n", false, &_init_f_operator_minus__eq__2456, &_call_f_operator_minus__eq__2456);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QQuaternion &QQuaternion::operator/=(double divisor)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("rotatedVector", "@brief Method QVector3D QQuaternion::rotatedVector(const QVector3D &vector)\n", true, &_init_f_rotatedVector_c2140, &_call_f_rotatedVector_c2140);
  methods += new qt_gsi::GenericMethod (":scalar", "@brief Method double QQuaternion::scalar()\n", true, &_init_f_scalar_c0, &_call_f_scalar_c0);
  methods += new qt_gsi::GenericMethod ("setScalar|scalar=", "@brief Method void QQuaternion::setScalar(double scalar)\n", false, &_init_f_setScalar_1071, &_call_f_setScalar_1071);
  methods += new qt_gsi::GenericMethod ("setVector|vector=", "@brief Method void QQuaternion::setVector(const QVector3D &vector)\n", false, &_init_f_setVector_2140, &_call_f_setVector_2140);
  methods += new qt_gsi::GenericMethod ("setVector", "@brief Method void QQuaternion::setVector(double x, double y, double z)\n", false, &_init_f_setVector_2997, &_call_f_setVector_2997);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QQuaternion::setX(double x)\n", false, &_init_f_setX_1071, &_call_f_setX_1071);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QQuaternion::setY(double y)\n", false, &_init_f_setY_1071, &_call_f_setY_1071);
  methods += new qt_gsi::GenericMethod ("setZ|z=", "@brief Method void QQuaternion::setZ(double z)\n", false, &_init_f_setZ_1071, &_call_f_setZ_1071);
  methods += new qt_gsi::GenericMethod ("toVector4D", "@brief Method QVector4D QQuaternion::toVector4D()\n", true, &_init_f_toVector4D_c0, &_call_f_toVector4D_c0);
  methods += new qt_gsi::GenericMethod (":vector", "@brief Method QVector3D QQuaternion::vector()\n", true, &_init_f_vector_c0, &_call_f_vector_c0);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method double QQuaternion::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method double QQuaternion::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericMethod (":z", "@brief Method double QQuaternion::z()\n", true, &_init_f_z_c0, &_call_f_z_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromAxisAndAngle", "@brief Static method QQuaternion QQuaternion::fromAxisAndAngle(const QVector3D &axis, double angle)\nThis method is static and can be called without an instance.", &_init_f_fromAxisAndAngle_3103, &_call_f_fromAxisAndAngle_3103);
  methods += new qt_gsi::GenericStaticMethod ("fromAxisAndAngle", "@brief Static method QQuaternion QQuaternion::fromAxisAndAngle(double x, double y, double z, double angle)\nThis method is static and can be called without an instance.", &_init_f_fromAxisAndAngle_3960, &_call_f_fromAxisAndAngle_3960);
  methods += new qt_gsi::GenericStaticMethod ("nlerp", "@brief Static method QQuaternion QQuaternion::nlerp(const QQuaternion &q1, const QQuaternion &q2, double t)\nThis method is static and can be called without an instance.", &_init_f_nlerp_5767, &_call_f_nlerp_5767);
  methods += new qt_gsi::GenericStaticMethod ("slerp", "@brief Static method QQuaternion QQuaternion::slerp(const QQuaternion &q1, const QQuaternion &q2, double t)\nThis method is static and can be called without an instance.", &_init_f_slerp_5767, &_call_f_slerp_5767);
  methods += gsi::method_ext("*", &::op_QQuaternion_operator_star__4804, gsi::arg ("q2"), "@brief Operator const QQuaternion ::operator*(const QQuaternion &q1, const QQuaternion &q2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("==", &::op_QQuaternion_operator_eq__eq__4804, gsi::arg ("q2"), "@brief Operator bool ::operator==(const QQuaternion &q1, const QQuaternion &q2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QQuaternion_operator_excl__eq__4804, gsi::arg ("q2"), "@brief Operator bool ::operator!=(const QQuaternion &q1, const QQuaternion &q2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QQuaternion_operator_plus__4804, gsi::arg ("q2"), "@brief Operator const QQuaternion ::operator+(const QQuaternion &q1, const QQuaternion &q2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QQuaternion_operator_minus__4804, gsi::arg ("q2"), "@brief Operator const QQuaternion ::operator-(const QQuaternion &q1, const QQuaternion &q2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QQuaternion_operator_star__3317, gsi::arg ("factor"), "@brief Operator const QQuaternion ::operator*(const QQuaternion &quaternion, qreal factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QQuaternion_operator_minus__2456, "@brief Operator const QQuaternion ::operator-(const QQuaternion &quaternion)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QQuaternion_operator_slash__3317, gsi::arg ("divisor"), "@brief Operator const QQuaternion ::operator/(const QQuaternion &quaternion, qreal divisor)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QQuaternion> decl_QQuaternion ("QtGui", "QQuaternion",
  methods_QQuaternion (),
  "@qt\n@brief Binding of QQuaternion");


GSI_QTGUI_PUBLIC gsi::Class<QQuaternion> &qtdecl_QQuaternion () { return decl_QQuaternion; }

}

