
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
*  @file gsiDeclQPointerEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPointerEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPointerEvent

// bool QPointerEvent::addPassiveGrabber(const QEventPoint &point, QObject *grabber)


static void _init_f_addPassiveGrabber_3624 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("grabber");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_addPassiveGrabber_3624 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->addPassiveGrabber (arg1, arg2));
}


// bool QPointerEvent::allPointsAccepted()


static void _init_f_allPointsAccepted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_allPointsAccepted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->allPointsAccepted ());
}


// bool QPointerEvent::allPointsGrabbed()


static void _init_f_allPointsGrabbed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_allPointsGrabbed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->allPointsGrabbed ());
}


// void QPointerEvent::clearPassiveGrabbers(const QEventPoint &point)


static void _init_f_clearPassiveGrabbers_2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_clearPassiveGrabbers_2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent *)cls)->clearPassiveGrabbers (arg1);
}


// QPointerEvent *QPointerEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointerEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointerEvent * > ((QPointerEvent *)((QPointerEvent *)cls)->clone ());
}


// QObject *QPointerEvent::exclusiveGrabber(const QEventPoint &point)


static void _init_f_exclusiveGrabber_c2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<QObject * > ();
}

static void _call_f_exclusiveGrabber_c2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<QObject * > ((QObject *)((QPointerEvent *)cls)->exclusiveGrabber (arg1));
}


// bool QPointerEvent::isBeginEvent()


static void _init_f_isBeginEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBeginEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->isBeginEvent ());
}


// bool QPointerEvent::isEndEvent()


static void _init_f_isEndEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEndEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->isEndEvent ());
}


// bool QPointerEvent::isUpdateEvent()


static void _init_f_isUpdateEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUpdateEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->isUpdateEvent ());
}


// QList<QPointer<QObject> > QPointerEvent::passiveGrabbers(const QEventPoint &point)


static void _init_f_passiveGrabbers_c2430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  decl->set_return<QList<QPointer<QObject> > > ();
}

static void _call_f_passiveGrabbers_c2430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  ret.write<QList<QPointer<QObject> > > ((QList<QPointer<QObject> >)((QPointerEvent *)cls)->passiveGrabbers (arg1));
}


// QEventPoint &QPointerEvent::point(qsizetype i)


static void _init_f_point_1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<QEventPoint & > ();
}

static void _call_f_point_1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QEventPoint & > ((QEventPoint &)((QPointerEvent *)cls)->point (arg1));
}


// QEventPoint *QPointerEvent::pointById(int id)


static void _init_f_pointById_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QEventPoint * > ();
}

static void _call_f_pointById_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QEventPoint * > ((QEventPoint *)((QPointerEvent *)cls)->pointById (arg1));
}


// qsizetype QPointerEvent::pointCount()


static void _init_f_pointCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qsizetype > ();
}

static void _call_f_pointCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qsizetype > ((qsizetype)((QPointerEvent *)cls)->pointCount ());
}


// QPointingDevice::PointerType QPointerEvent::pointerType()


static void _init_f_pointerType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPointingDevice::PointerType>::target_type > ();
}

static void _call_f_pointerType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPointingDevice::PointerType>::target_type > ((qt_gsi::Converter<QPointingDevice::PointerType>::target_type)qt_gsi::CppToQtAdaptor<QPointingDevice::PointerType>(((QPointerEvent *)cls)->pointerType ()));
}


// const QPointingDevice *QPointerEvent::pointingDevice()


static void _init_f_pointingDevice_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPointingDevice * > ();
}

static void _call_f_pointingDevice_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPointingDevice * > ((const QPointingDevice *)((QPointerEvent *)cls)->pointingDevice ());
}


// const QList<QEventPoint> &QPointerEvent::points()


static void _init_f_points_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QList<QEventPoint> & > ();
}

static void _call_f_points_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QList<QEventPoint> & > ((const QList<QEventPoint> &)((QPointerEvent *)cls)->points ());
}


// bool QPointerEvent::removePassiveGrabber(const QEventPoint &point, QObject *grabber)


static void _init_f_removePassiveGrabber_3624 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("grabber");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_removePassiveGrabber_3624 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<bool > ((bool)((QPointerEvent *)cls)->removePassiveGrabber (arg1, arg2));
}


// void QPointerEvent::setAccepted(bool accepted)


static void _init_f_setAccepted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAccepted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent *)cls)->setAccepted (arg1);
}


// void QPointerEvent::setExclusiveGrabber(const QEventPoint &point, QObject *exclusiveGrabber)


static void _init_f_setExclusiveGrabber_3624 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QEventPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("exclusiveGrabber");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setExclusiveGrabber_3624 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QEventPoint &arg1 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent *)cls)->setExclusiveGrabber (arg1, arg2);
}


// void QPointerEvent::setTimestamp(quint64 timestamp)


static void _init_f_setTimestamp_1103 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTimestamp_1103 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = gsi::arg_reader<quint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent *)cls)->setTimestamp (arg1);
}


namespace gsi
{

static gsi::Methods methods_QPointerEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("addPassiveGrabber", "@brief Method bool QPointerEvent::addPassiveGrabber(const QEventPoint &point, QObject *grabber)\n", false, &_init_f_addPassiveGrabber_3624, &_call_f_addPassiveGrabber_3624);
  methods += new qt_gsi::GenericMethod ("allPointsAccepted", "@brief Method bool QPointerEvent::allPointsAccepted()\n", true, &_init_f_allPointsAccepted_c0, &_call_f_allPointsAccepted_c0);
  methods += new qt_gsi::GenericMethod ("allPointsGrabbed", "@brief Method bool QPointerEvent::allPointsGrabbed()\n", true, &_init_f_allPointsGrabbed_c0, &_call_f_allPointsGrabbed_c0);
  methods += new qt_gsi::GenericMethod ("clearPassiveGrabbers", "@brief Method void QPointerEvent::clearPassiveGrabbers(const QEventPoint &point)\n", false, &_init_f_clearPassiveGrabbers_2430, &_call_f_clearPassiveGrabbers_2430);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QPointerEvent *QPointerEvent::clone()\nThis is a reimplementation of QInputEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("exclusiveGrabber", "@brief Method QObject *QPointerEvent::exclusiveGrabber(const QEventPoint &point)\n", true, &_init_f_exclusiveGrabber_c2430, &_call_f_exclusiveGrabber_c2430);
  methods += new qt_gsi::GenericMethod ("isBeginEvent?", "@brief Method bool QPointerEvent::isBeginEvent()\n", true, &_init_f_isBeginEvent_c0, &_call_f_isBeginEvent_c0);
  methods += new qt_gsi::GenericMethod ("isEndEvent?", "@brief Method bool QPointerEvent::isEndEvent()\n", true, &_init_f_isEndEvent_c0, &_call_f_isEndEvent_c0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent?", "@brief Method bool QPointerEvent::isUpdateEvent()\n", true, &_init_f_isUpdateEvent_c0, &_call_f_isUpdateEvent_c0);
  methods += new qt_gsi::GenericMethod ("passiveGrabbers", "@brief Method QList<QPointer<QObject> > QPointerEvent::passiveGrabbers(const QEventPoint &point)\n", true, &_init_f_passiveGrabbers_c2430, &_call_f_passiveGrabbers_c2430);
  methods += new qt_gsi::GenericMethod ("point", "@brief Method QEventPoint &QPointerEvent::point(qsizetype i)\n", false, &_init_f_point_1442, &_call_f_point_1442);
  methods += new qt_gsi::GenericMethod ("pointById", "@brief Method QEventPoint *QPointerEvent::pointById(int id)\n", false, &_init_f_pointById_767, &_call_f_pointById_767);
  methods += new qt_gsi::GenericMethod ("pointCount", "@brief Method qsizetype QPointerEvent::pointCount()\n", true, &_init_f_pointCount_c0, &_call_f_pointCount_c0);
  methods += new qt_gsi::GenericMethod ("pointerType", "@brief Method QPointingDevice::PointerType QPointerEvent::pointerType()\n", true, &_init_f_pointerType_c0, &_call_f_pointerType_c0);
  methods += new qt_gsi::GenericMethod ("pointingDevice", "@brief Method const QPointingDevice *QPointerEvent::pointingDevice()\n", true, &_init_f_pointingDevice_c0, &_call_f_pointingDevice_c0);
  methods += new qt_gsi::GenericMethod ("points", "@brief Method const QList<QEventPoint> &QPointerEvent::points()\n", true, &_init_f_points_c0, &_call_f_points_c0);
  methods += new qt_gsi::GenericMethod ("removePassiveGrabber", "@brief Method bool QPointerEvent::removePassiveGrabber(const QEventPoint &point, QObject *grabber)\n", false, &_init_f_removePassiveGrabber_3624, &_call_f_removePassiveGrabber_3624);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Method void QPointerEvent::setAccepted(bool accepted)\nThis is a reimplementation of QEvent::setAccepted", false, &_init_f_setAccepted_864, &_call_f_setAccepted_864);
  methods += new qt_gsi::GenericMethod ("setExclusiveGrabber", "@brief Method void QPointerEvent::setExclusiveGrabber(const QEventPoint &point, QObject *exclusiveGrabber)\n", false, &_init_f_setExclusiveGrabber_3624, &_call_f_setExclusiveGrabber_3624);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Method void QPointerEvent::setTimestamp(quint64 timestamp)\nThis is a reimplementation of QInputEvent::setTimestamp", false, &_init_f_setTimestamp_1103, &_call_f_setTimestamp_1103);
  return methods;
}

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

gsi::Class<QPointerEvent> decl_QPointerEvent (qtdecl_QInputEvent (), "QtGui", "QPointerEvent_Native",
  methods_QPointerEvent (),
  "@hide\n@alias QPointerEvent");

GSI_QTGUI_PUBLIC gsi::Class<QPointerEvent> &qtdecl_QPointerEvent () { return decl_QPointerEvent; }

}


class QPointerEvent_Adaptor : public QPointerEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPointerEvent_Adaptor();

  //  [adaptor ctor] QPointerEvent::QPointerEvent(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points)
  QPointerEvent_Adaptor(QEvent::Type type, const QPointingDevice *dev) : QPointerEvent(type, dev)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointerEvent::QPointerEvent(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points)
  QPointerEvent_Adaptor(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers) : QPointerEvent(type, dev, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointerEvent::QPointerEvent(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points)
  QPointerEvent_Adaptor(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points) : QPointerEvent(type, dev, modifiers, points)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QPointerEvent *QPointerEvent::clone()
  QPointerEvent * cbs_clone_c0_0() const
  {
    return QPointerEvent::clone();
  }

  virtual QPointerEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QPointerEvent_Adaptor, QPointerEvent *>(&QPointerEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QPointerEvent::clone();
    }
  }

  //  [adaptor impl] bool QPointerEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QPointerEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QPointerEvent_Adaptor, bool>(&QPointerEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QPointerEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QPointerEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QPointerEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QPointerEvent_Adaptor, bool>(&QPointerEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QPointerEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QPointerEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QPointerEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QPointerEvent_Adaptor, bool>(&QPointerEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QPointerEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QPointerEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QPointerEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QPointerEvent_Adaptor, bool>(&QPointerEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QPointerEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QPointerEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QPointerEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QPointerEvent_Adaptor, quint64>(&QPointerEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QPointerEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QPointerEvent_Adaptor::~QPointerEvent_Adaptor() { }

//  Constructor QPointerEvent::QPointerEvent(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points) (adaptor class)

static void _init_ctor_QPointerEvent_Adaptor_10193 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dev");
  decl->add_arg<const QPointingDevice * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("points", true, "{}");
  decl->add_arg<const QList<QEventPoint> & > (argspec_3);
  decl->set_return_new<QPointerEvent_Adaptor> ();
}

static void _call_ctor_QPointerEvent_Adaptor_10193 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPointingDevice *arg2 = gsi::arg_reader<const QPointingDevice * >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg3 = args ? gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap) : gsi::arg_maker<QFlags<Qt::KeyboardModifier> >() (Qt::NoModifier, heap);
  const QList<QEventPoint> &arg4 = args ? gsi::arg_reader<const QList<QEventPoint> & >() (args, heap) : gsi::arg_maker<const QList<QEventPoint> & >() ({}, heap);
  ret.write<QPointerEvent_Adaptor *> (new QPointerEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3, arg4));
}


// QPointerEvent *QPointerEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointerEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointerEvent * > ((QPointerEvent *)((QPointerEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// bool QPointerEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QPointerEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QPointerEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPointerEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QPointerEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QPointerEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointerEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointerEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QPointerEvent> &qtdecl_QPointerEvent ();

static gsi::Methods methods_QPointerEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointerEvent::QPointerEvent(QEvent::Type type, const QPointingDevice *dev, QFlags<Qt::KeyboardModifier> modifiers, const QList<QEventPoint> &points)\nThis method creates an object of class QPointerEvent.", &_init_ctor_QPointerEvent_Adaptor_10193, &_call_ctor_QPointerEvent_Adaptor_10193);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QPointerEvent *QPointerEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QPointerEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QPointerEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QPointerEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QPointerEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QPointerEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QPointerEvent_Adaptor> decl_QPointerEvent_Adaptor (qtdecl_QPointerEvent (), "QtGui", "QPointerEvent",
  methods_QPointerEvent_Adaptor (),
  "@qt\n@brief Binding of QPointerEvent");

}

