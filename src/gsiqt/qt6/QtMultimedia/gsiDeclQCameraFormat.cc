
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
*  @file gsiDeclQCameraFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraFormat>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraFormat

//  Constructor QCameraFormat::QCameraFormat()


static void _init_ctor_QCameraFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraFormat> ();
}

static void _call_ctor_QCameraFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraFormat *> (new QCameraFormat ());
}


//  Constructor QCameraFormat::QCameraFormat(const QCameraFormat &other)


static void _init_ctor_QCameraFormat_2596 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraFormat & > (argspec_0);
  decl->set_return_new<QCameraFormat> ();
}

static void _call_ctor_QCameraFormat_2596 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraFormat &arg1 = gsi::arg_reader<const QCameraFormat & >() (args, heap);
  ret.write<QCameraFormat *> (new QCameraFormat (arg1));
}


// bool QCameraFormat::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraFormat *)cls)->isNull ());
}


// float QCameraFormat::maxFrameRate()


static void _init_f_maxFrameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_maxFrameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QCameraFormat *)cls)->maxFrameRate ());
}


// float QCameraFormat::minFrameRate()


static void _init_f_minFrameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_minFrameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QCameraFormat *)cls)->minFrameRate ());
}


// bool QCameraFormat::operator!=(const QCameraFormat &other)


static void _init_f_operator_excl__eq__c2596 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2596 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraFormat &arg1 = gsi::arg_reader<const QCameraFormat & >() (args, heap);
  ret.write<bool > ((bool)((QCameraFormat *)cls)->operator!= (arg1));
}


// QCameraFormat &QCameraFormat::operator=(const QCameraFormat &other)


static void _init_f_operator_eq__2596 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraFormat & > (argspec_0);
  decl->set_return<QCameraFormat & > ();
}

static void _call_f_operator_eq__2596 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraFormat &arg1 = gsi::arg_reader<const QCameraFormat & >() (args, heap);
  ret.write<QCameraFormat & > ((QCameraFormat &)((QCameraFormat *)cls)->operator= (arg1));
}


// bool QCameraFormat::operator==(const QCameraFormat &other)


static void _init_f_operator_eq__eq__c2596 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2596 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraFormat &arg1 = gsi::arg_reader<const QCameraFormat & >() (args, heap);
  ret.write<bool > ((bool)((QCameraFormat *)cls)->operator== (arg1));
}


// QVideoFrameFormat::PixelFormat QCameraFormat::pixelFormat()


static void _init_f_pixelFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type > ();
}

static void _call_f_pixelFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrameFormat::PixelFormat>(((QCameraFormat *)cls)->pixelFormat ()));
}


// QSize QCameraFormat::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QCameraFormat *)cls)->resolution ());
}



namespace gsi
{

static gsi::Methods methods_QCameraFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraFormat::QCameraFormat()\nThis method creates an object of class QCameraFormat.", &_init_ctor_QCameraFormat_0, &_call_ctor_QCameraFormat_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraFormat::QCameraFormat(const QCameraFormat &other)\nThis method creates an object of class QCameraFormat.", &_init_ctor_QCameraFormat_2596, &_call_ctor_QCameraFormat_2596);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QCameraFormat::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("maxFrameRate", "@brief Method float QCameraFormat::maxFrameRate()\n", true, &_init_f_maxFrameRate_c0, &_call_f_maxFrameRate_c0);
  methods += new qt_gsi::GenericMethod ("minFrameRate", "@brief Method float QCameraFormat::minFrameRate()\n", true, &_init_f_minFrameRate_c0, &_call_f_minFrameRate_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QCameraFormat::operator!=(const QCameraFormat &other)\n", true, &_init_f_operator_excl__eq__c2596, &_call_f_operator_excl__eq__c2596);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCameraFormat &QCameraFormat::operator=(const QCameraFormat &other)\n", false, &_init_f_operator_eq__2596, &_call_f_operator_eq__2596);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QCameraFormat::operator==(const QCameraFormat &other)\n", true, &_init_f_operator_eq__eq__c2596, &_call_f_operator_eq__eq__c2596);
  methods += new qt_gsi::GenericMethod ("pixelFormat", "@brief Method QVideoFrameFormat::PixelFormat QCameraFormat::pixelFormat()\n", true, &_init_f_pixelFormat_c0, &_call_f_pixelFormat_c0);
  methods += new qt_gsi::GenericMethod ("resolution", "@brief Method QSize QCameraFormat::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  return methods;
}

gsi::Class<QCameraFormat> decl_QCameraFormat ("QtMultimedia", "QCameraFormat",
  methods_QCameraFormat (),
  "@qt\n@brief Binding of QCameraFormat");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraFormat> &qtdecl_QCameraFormat () { return decl_QCameraFormat; }

}

