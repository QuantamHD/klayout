
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
*  @file gsiDeclQIcon.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIcon>
#include <QIconEngine>
#include <QIconEngineV2>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIcon

//  Constructor QIcon::QIcon()


static void _init_ctor_QIcon_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QIcon *> (new QIcon ());
}


//  Constructor QIcon::QIcon(const QPixmap &pixmap)


static void _init_ctor_QIcon_2017 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_2017 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QIcon *> (new QIcon (arg1));
}


//  Constructor QIcon::QIcon(const QIcon &other)


static void _init_ctor_QIcon_1787 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QIcon & > (argspec_0);
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_1787 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QIcon &arg1 = gsi::arg_reader<const QIcon & >() (args, heap);
  ret.write<QIcon *> (new QIcon (arg1));
}


//  Constructor QIcon::QIcon(const QString &fileName)


static void _init_ctor_QIcon_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QIcon *> (new QIcon (arg1));
}


//  Constructor QIcon::QIcon(QIconEngine *engine)


static void _init_ctor_QIcon_1694 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("engine");
  decl->add_arg<QIconEngine * > (argspec_0);
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_1694 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIconEngine *arg1 = gsi::arg_reader<QIconEngine * >() (args, heap);
  ret.write<QIcon *> (new QIcon (arg1));
}


//  Constructor QIcon::QIcon(QIconEngineV2 *engine)


static void _init_ctor_QIcon_1830 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("engine");
  decl->add_arg<QIconEngineV2 * > (argspec_0);
  decl->set_return_new<QIcon> ();
}

static void _call_ctor_QIcon_1830 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIconEngineV2 *arg1 = gsi::arg_reader<QIconEngineV2 * >() (args, heap);
  ret.write<QIcon *> (new QIcon (arg1));
}


// QSize QIcon::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_actualSize_c4543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QSize > ();
}

static void _call_f_actualSize_c4543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QSize > ((QSize)((QIcon *)cls)->actualSize (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref()));
}


// void QIcon::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_addFile_6460 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("size", true, "QSize()");
  decl->add_arg<const QSize & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_addFile_6460 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QSize &arg2 = args ? gsi::arg_reader<const QSize & >() (args, heap) : gsi::arg_maker<const QSize & >() (QSize(), heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIcon *)cls)->addFile (arg1, arg2, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg3).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg4).cref());
}


// void QIcon::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)


static void _init_f_addPixmap_4755 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_addPixmap_4755 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIcon *)cls)->addPixmap (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref());
}


// QList<QSize> QIcon::availableSizes(QIcon::Mode mode, QIcon::State state)


static void _init_f_availableSizes_c2846 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_1);
  decl->set_return<QList<QSize> > ();
}

static void _call_f_availableSizes_c2846 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QList<QSize> > ((QList<QSize>)((QIcon *)cls)->availableSizes (qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg1).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg2).cref()));
}


// qint64 QIcon::cacheKey()


static void _init_f_cacheKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_cacheKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QIcon *)cls)->cacheKey ());
}


// void QIcon::detach()


static void _init_f_detach_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_detach_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIcon *)cls)->detach ();
}


// bool QIcon::isDetached()


static void _init_f_isDetached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIcon *)cls)->isDetached ());
}


// bool QIcon::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIcon *)cls)->isNull ());
}


// QIcon &QIcon::operator=(const QIcon &other)


static void _init_f_operator_eq__1787 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QIcon & > (argspec_0);
  decl->set_return<QIcon & > ();
}

static void _call_f_operator_eq__1787 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QIcon &arg1 = gsi::arg_reader<const QIcon & >() (args, heap);
  ret.write<QIcon & > ((QIcon &)((QIcon *)cls)->operator= (arg1));
}


// void QIcon::paint(QPainter *painter, const QRect &rect, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state)


static void _init_f_paint_c8490 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRect & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("alignment", true, "Qt::AlignCenter");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_4);
  decl->set_return<void > ();
}

static void _call_f_paint_c8490 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QRect &arg2 = gsi::arg_reader<const QRect & >() (args, heap);
  QFlags<Qt::AlignmentFlag> arg3 = args ? gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap) : gsi::arg_maker<QFlags<Qt::AlignmentFlag> >() (Qt::AlignCenter, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg5 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIcon *)cls)->paint (arg1, arg2, arg3, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg4).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg5).cref());
}


// void QIcon::paint(QPainter *painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state)


static void _init_f_paint_c9442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("x");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("y");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("w");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("h");
  decl->add_arg<int > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("alignment", true, "Qt::AlignCenter");
  decl->add_arg<QFlags<Qt::AlignmentFlag> > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_7);
  decl->set_return<void > ();
}

static void _call_f_paint_c9442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  int arg5 = gsi::arg_reader<int >() (args, heap);
  QFlags<Qt::AlignmentFlag> arg6 = args ? gsi::arg_reader<QFlags<Qt::AlignmentFlag> >() (args, heap) : gsi::arg_maker<QFlags<Qt::AlignmentFlag> >() (Qt::AlignCenter, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg7 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg8 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIcon *)cls)->paint (arg1, arg2, arg3, arg4, arg5, arg6, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg7).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg8).cref());
}


// QPixmap QIcon::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)


static void _init_f_pixmap_c4543 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c4543 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QPixmap > ((QPixmap)((QIcon *)cls)->pixmap (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref()));
}


// QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state)


static void _init_f_pixmap_c4164 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_3);
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c4164 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QPixmap > ((QPixmap)((QIcon *)cls)->pixmap (arg1, arg2, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg3).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg4).cref()));
}


// QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state)


static void _init_f_pixmap_c3505 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("extent");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QIcon::Normal");
  decl->add_arg<const qt_gsi::Converter<QIcon::Mode>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state", true, "QIcon::Off");
  decl->add_arg<const qt_gsi::Converter<QIcon::State>::target_type & > (argspec_2);
  decl->set_return<QPixmap > ();
}

static void _call_f_pixmap_c3505 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QIcon::Mode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::Mode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::Mode>(heap, QIcon::Normal), heap);
  const qt_gsi::Converter<QIcon::State>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QIcon::State>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QIcon::State>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QIcon::State>(heap, QIcon::Off), heap);
  ret.write<QPixmap > ((QPixmap)((QIcon *)cls)->pixmap (arg1, qt_gsi::QtToCppAdaptor<QIcon::Mode>(arg2).cref(), qt_gsi::QtToCppAdaptor<QIcon::State>(arg3).cref()));
}


// int QIcon::serialNumber()


static void _init_f_serialNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_serialNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QIcon *)cls)->serialNumber ());
}


// static QIcon QIcon::fromTheme(const QString &name, const QIcon &fallback)


static void _init_f_fromTheme_3704 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fallback", true, "QIcon()");
  decl->add_arg<const QIcon & > (argspec_1);
  decl->set_return<QIcon > ();
}

static void _call_f_fromTheme_3704 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QIcon &arg2 = args ? gsi::arg_reader<const QIcon & >() (args, heap) : gsi::arg_maker<const QIcon & >() (QIcon(), heap);
  ret.write<QIcon > ((QIcon)QIcon::fromTheme (arg1, arg2));
}


// static bool QIcon::hasThemeIcon(const QString &name)


static void _init_f_hasThemeIcon_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasThemeIcon_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QIcon::hasThemeIcon (arg1));
}


// static void QIcon::setThemeName(const QString &path)


static void _init_f_setThemeName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setThemeName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QIcon::setThemeName (arg1);
}


// static void QIcon::setThemeSearchPaths(const QStringList &searchpath)


static void _init_f_setThemeSearchPaths_2437 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("searchpath");
  decl->add_arg<const QStringList & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setThemeSearchPaths_2437 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringList &arg1 = gsi::arg_reader<const QStringList & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QIcon::setThemeSearchPaths (arg1);
}


// static QString QIcon::themeName()


static void _init_f_themeName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_themeName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QIcon::themeName ());
}


// static QStringList QIcon::themeSearchPaths()


static void _init_f_themeSearchPaths_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_themeSearchPaths_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QIcon::themeSearchPaths ());
}



namespace gsi
{

static gsi::Methods methods_QIcon () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon()\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_0, &_call_ctor_QIcon_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon(const QPixmap &pixmap)\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_2017, &_call_ctor_QIcon_2017);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon(const QIcon &other)\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_1787, &_call_ctor_QIcon_1787);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon(const QString &fileName)\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_2025, &_call_ctor_QIcon_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon(QIconEngine *engine)\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_1694, &_call_ctor_QIcon_1694);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIcon::QIcon(QIconEngineV2 *engine)\nThis method creates an object of class QIcon.", &_init_ctor_QIcon_1830, &_call_ctor_QIcon_1830);
  methods += new qt_gsi::GenericMethod ("actualSize", "@brief Method QSize QIcon::actualSize(const QSize &size, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_actualSize_c4543, &_call_f_actualSize_c4543);
  methods += new qt_gsi::GenericMethod ("addFile", "@brief Method void QIcon::addFile(const QString &fileName, const QSize &size, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_addFile_6460, &_call_f_addFile_6460);
  methods += new qt_gsi::GenericMethod ("addPixmap", "@brief Method void QIcon::addPixmap(const QPixmap &pixmap, QIcon::Mode mode, QIcon::State state)\n", false, &_init_f_addPixmap_4755, &_call_f_addPixmap_4755);
  methods += new qt_gsi::GenericMethod ("availableSizes", "@brief Method QList<QSize> QIcon::availableSizes(QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_availableSizes_c2846, &_call_f_availableSizes_c2846);
  methods += new qt_gsi::GenericMethod ("cacheKey", "@brief Method qint64 QIcon::cacheKey()\n", true, &_init_f_cacheKey_c0, &_call_f_cacheKey_c0);
  methods += new qt_gsi::GenericMethod ("detach", "@brief Method void QIcon::detach()\n", false, &_init_f_detach_0, &_call_f_detach_0);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QIcon::isDetached()\n", true, &_init_f_isDetached_c0, &_call_f_isDetached_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QIcon::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QIcon &QIcon::operator=(const QIcon &other)\n", false, &_init_f_operator_eq__1787, &_call_f_operator_eq__1787);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Method void QIcon::paint(QPainter *painter, const QRect &rect, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_paint_c8490, &_call_f_paint_c8490);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Method void QIcon::paint(QPainter *painter, int x, int y, int w, int h, QFlags<Qt::AlignmentFlag> alignment, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_paint_c9442, &_call_f_paint_c9442);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Method QPixmap QIcon::pixmap(const QSize &size, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_pixmap_c4543, &_call_f_pixmap_c4543);
  methods += new qt_gsi::GenericMethod ("pixmap", "@brief Method QPixmap QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_pixmap_c4164, &_call_f_pixmap_c4164);
  methods += new qt_gsi::GenericMethod ("pixmap_ext", "@brief Method QPixmap QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state)\n", true, &_init_f_pixmap_c3505, &_call_f_pixmap_c3505);
  methods += new qt_gsi::GenericMethod ("serialNumber", "@brief Method int QIcon::serialNumber()\n", true, &_init_f_serialNumber_c0, &_call_f_serialNumber_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromTheme", "@brief Static method QIcon QIcon::fromTheme(const QString &name, const QIcon &fallback)\nThis method is static and can be called without an instance.", &_init_f_fromTheme_3704, &_call_f_fromTheme_3704);
  methods += new qt_gsi::GenericStaticMethod ("hasThemeIcon", "@brief Static method bool QIcon::hasThemeIcon(const QString &name)\nThis method is static and can be called without an instance.", &_init_f_hasThemeIcon_2025, &_call_f_hasThemeIcon_2025);
  methods += new qt_gsi::GenericStaticMethod ("setThemeName|themeName=", "@brief Static method void QIcon::setThemeName(const QString &path)\nThis method is static and can be called without an instance.", &_init_f_setThemeName_2025, &_call_f_setThemeName_2025);
  methods += new qt_gsi::GenericStaticMethod ("setThemeSearchPaths|themeSearchPaths=", "@brief Static method void QIcon::setThemeSearchPaths(const QStringList &searchpath)\nThis method is static and can be called without an instance.", &_init_f_setThemeSearchPaths_2437, &_call_f_setThemeSearchPaths_2437);
  methods += new qt_gsi::GenericStaticMethod (":themeName", "@brief Static method QString QIcon::themeName()\nThis method is static and can be called without an instance.", &_init_f_themeName_0, &_call_f_themeName_0);
  methods += new qt_gsi::GenericStaticMethod (":themeSearchPaths", "@brief Static method QStringList QIcon::themeSearchPaths()\nThis method is static and can be called without an instance.", &_init_f_themeSearchPaths_0, &_call_f_themeSearchPaths_0);
  return methods;
}

gsi::Class<QIcon> decl_QIcon ("QtGui", "QIcon",
  methods_QIcon (),
  "@qt\n@brief Binding of QIcon");


GSI_QTGUI_PUBLIC gsi::Class<QIcon> &qtdecl_QIcon () { return decl_QIcon; }

}


//  Implementation of the enum wrapper class for QIcon::Mode
namespace qt_gsi
{

static gsi::Enum<QIcon::Mode> decl_QIcon_Mode_Enum ("QtGui", "QIcon_Mode",
    gsi::enum_const ("Normal", QIcon::Normal, "@brief Enum constant QIcon::Normal") +
    gsi::enum_const ("Disabled", QIcon::Disabled, "@brief Enum constant QIcon::Disabled") +
    gsi::enum_const ("Active", QIcon::Active, "@brief Enum constant QIcon::Active") +
    gsi::enum_const ("Selected", QIcon::Selected, "@brief Enum constant QIcon::Selected"),
  "@qt\n@brief This class represents the QIcon::Mode enum");

static gsi::QFlagsClass<QIcon::Mode > decl_QIcon_Mode_Enums ("QtGui", "QIcon_QFlags_Mode",
  "@qt\n@brief This class represents the QFlags<QIcon::Mode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QIcon> inject_QIcon_Mode_Enum_in_parent (decl_QIcon_Mode_Enum.defs ());
static gsi::ClassExt<QIcon> decl_QIcon_Mode_Enum_as_child (decl_QIcon_Mode_Enum, "Mode");
static gsi::ClassExt<QIcon> decl_QIcon_Mode_Enums_as_child (decl_QIcon_Mode_Enums, "QFlags_Mode");

}


//  Implementation of the enum wrapper class for QIcon::State
namespace qt_gsi
{

static gsi::Enum<QIcon::State> decl_QIcon_State_Enum ("QtGui", "QIcon_State",
    gsi::enum_const ("On", QIcon::On, "@brief Enum constant QIcon::On") +
    gsi::enum_const ("Off", QIcon::Off, "@brief Enum constant QIcon::Off"),
  "@qt\n@brief This class represents the QIcon::State enum");

static gsi::QFlagsClass<QIcon::State > decl_QIcon_State_Enums ("QtGui", "QIcon_QFlags_State",
  "@qt\n@brief This class represents the QFlags<QIcon::State> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QIcon> inject_QIcon_State_Enum_in_parent (decl_QIcon_State_Enum.defs ());
static gsi::ClassExt<QIcon> decl_QIcon_State_Enum_as_child (decl_QIcon_State_Enum, "State");
static gsi::ClassExt<QIcon> decl_QIcon_State_Enums_as_child (decl_QIcon_State_Enums, "QFlags_State");

}

