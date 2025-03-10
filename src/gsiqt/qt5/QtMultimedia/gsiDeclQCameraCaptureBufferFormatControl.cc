
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
*  @file gsiDeclQCameraCaptureBufferFormatControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraCaptureBufferFormatControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraCaptureBufferFormatControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraCaptureBufferFormatControl::staticMetaObject);
}


// QVideoFrame::PixelFormat QCameraCaptureBufferFormatControl::bufferFormat()


static void _init_f_bufferFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ();
}

static void _call_f_bufferFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrame::PixelFormat>(((QCameraCaptureBufferFormatControl *)cls)->bufferFormat ()));
}


// void QCameraCaptureBufferFormatControl::bufferFormatChanged(QVideoFrame::PixelFormat)


static void _init_f_bufferFormatChanged_2758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_bufferFormatChanged_2758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl *)cls)->bufferFormatChanged (qt_gsi::QtToCppAdaptor<QVideoFrame::PixelFormat>(arg1).cref());
}


// void QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat format)


static void _init_f_setBufferFormat_2758 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBufferFormat_2758 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl *)cls)->setBufferFormat (qt_gsi::QtToCppAdaptor<QVideoFrame::PixelFormat>(arg1).cref());
}


// QList<QVideoFrame::PixelFormat> QCameraCaptureBufferFormatControl::supportedBufferFormats()


static void _init_f_supportedBufferFormats_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QVideoFrame::PixelFormat> > ();
}

static void _call_f_supportedBufferFormats_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QVideoFrame::PixelFormat> > ((QList<QVideoFrame::PixelFormat>)((QCameraCaptureBufferFormatControl *)cls)->supportedBufferFormats ());
}


// static QString QCameraCaptureBufferFormatControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraCaptureBufferFormatControl::tr (arg1, arg2, arg3));
}


// static QString QCameraCaptureBufferFormatControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraCaptureBufferFormatControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QCameraCaptureBufferFormatControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":bufferFormat", "@brief Method QVideoFrame::PixelFormat QCameraCaptureBufferFormatControl::bufferFormat()\n", true, &_init_f_bufferFormat_c0, &_call_f_bufferFormat_c0);
  methods += new qt_gsi::GenericMethod ("bufferFormatChanged", "@brief Method void QCameraCaptureBufferFormatControl::bufferFormatChanged(QVideoFrame::PixelFormat)\n", false, &_init_f_bufferFormatChanged_2758, &_call_f_bufferFormatChanged_2758);
  methods += new qt_gsi::GenericMethod ("setBufferFormat|bufferFormat=", "@brief Method void QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat format)\n", false, &_init_f_setBufferFormat_2758, &_call_f_setBufferFormat_2758);
  methods += new qt_gsi::GenericMethod ("supportedBufferFormats", "@brief Method QList<QVideoFrame::PixelFormat> QCameraCaptureBufferFormatControl::supportedBufferFormats()\n", true, &_init_f_supportedBufferFormats_c0, &_call_f_supportedBufferFormats_c0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraCaptureBufferFormatControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraCaptureBufferFormatControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QCameraCaptureBufferFormatControl> decl_QCameraCaptureBufferFormatControl (qtdecl_QMediaControl (), "QtMultimedia", "QCameraCaptureBufferFormatControl_Native",
  methods_QCameraCaptureBufferFormatControl (),
  "@hide\n@alias QCameraCaptureBufferFormatControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraCaptureBufferFormatControl> &qtdecl_QCameraCaptureBufferFormatControl () { return decl_QCameraCaptureBufferFormatControl; }

}


class QCameraCaptureBufferFormatControl_Adaptor : public QCameraCaptureBufferFormatControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCameraCaptureBufferFormatControl_Adaptor();

  //  [adaptor ctor] QCameraCaptureBufferFormatControl::QCameraCaptureBufferFormatControl()
  QCameraCaptureBufferFormatControl_Adaptor() : QCameraCaptureBufferFormatControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QCameraCaptureBufferFormatControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QCameraCaptureBufferFormatControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QCameraCaptureBufferFormatControl::isSignalConnected(signal);
  }

  //  [expose] int QCameraCaptureBufferFormatControl::receivers(const char *signal)
  int fp_QCameraCaptureBufferFormatControl_receivers_c1731 (const char *signal) const {
    return QCameraCaptureBufferFormatControl::receivers(signal);
  }

  //  [expose] QObject *QCameraCaptureBufferFormatControl::sender()
  QObject * fp_QCameraCaptureBufferFormatControl_sender_c0 () const {
    return QCameraCaptureBufferFormatControl::sender();
  }

  //  [expose] int QCameraCaptureBufferFormatControl::senderSignalIndex()
  int fp_QCameraCaptureBufferFormatControl_senderSignalIndex_c0 () const {
    return QCameraCaptureBufferFormatControl::senderSignalIndex();
  }

  //  [adaptor impl] QVideoFrame::PixelFormat QCameraCaptureBufferFormatControl::bufferFormat()
  qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type cbs_bufferFormat_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("bufferFormat");
  }

  virtual QVideoFrame::PixelFormat bufferFormat() const
  {
    if (cb_bufferFormat_c0_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QVideoFrame::PixelFormat>(cb_bufferFormat_c0_0.issue<QCameraCaptureBufferFormatControl_Adaptor, qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_bufferFormat_c0_0)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("bufferFormat");
    }
  }

  //  [adaptor impl] bool QCameraCaptureBufferFormatControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QCameraCaptureBufferFormatControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QCameraCaptureBufferFormatControl_Adaptor, bool, QEvent *>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QCameraCaptureBufferFormatControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QCameraCaptureBufferFormatControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QCameraCaptureBufferFormatControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QCameraCaptureBufferFormatControl_Adaptor, bool, QObject *, QEvent *>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QCameraCaptureBufferFormatControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat format)
  void cbs_setBufferFormat_2758_0(const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & format)
  {
    __SUPPRESS_UNUSED_WARNING (format);
    throw qt_gsi::AbstractMethodCalledException("setBufferFormat");
  }

  virtual void setBufferFormat(QVideoFrame::PixelFormat format)
  {
    if (cb_setBufferFormat_2758_0.can_issue()) {
      cb_setBufferFormat_2758_0.issue<QCameraCaptureBufferFormatControl_Adaptor, const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type &>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_setBufferFormat_2758_0, qt_gsi::CppToQtAdaptor<QVideoFrame::PixelFormat>(format));
    } else {
      throw qt_gsi::AbstractMethodCalledException("setBufferFormat");
    }
  }

  //  [adaptor impl] QList<QVideoFrame::PixelFormat> QCameraCaptureBufferFormatControl::supportedBufferFormats()
  QList<QVideoFrame::PixelFormat> cbs_supportedBufferFormats_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedBufferFormats");
  }

  virtual QList<QVideoFrame::PixelFormat> supportedBufferFormats() const
  {
    if (cb_supportedBufferFormats_c0_0.can_issue()) {
      return cb_supportedBufferFormats_c0_0.issue<QCameraCaptureBufferFormatControl_Adaptor, QList<QVideoFrame::PixelFormat> >(&QCameraCaptureBufferFormatControl_Adaptor::cbs_supportedBufferFormats_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedBufferFormats");
    }
  }

  //  [adaptor impl] void QCameraCaptureBufferFormatControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QCameraCaptureBufferFormatControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QCameraCaptureBufferFormatControl_Adaptor, QChildEvent *>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QCameraCaptureBufferFormatControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraCaptureBufferFormatControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QCameraCaptureBufferFormatControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QCameraCaptureBufferFormatControl_Adaptor, QEvent *>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QCameraCaptureBufferFormatControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraCaptureBufferFormatControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QCameraCaptureBufferFormatControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QCameraCaptureBufferFormatControl_Adaptor, const QMetaMethod &>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QCameraCaptureBufferFormatControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QCameraCaptureBufferFormatControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QCameraCaptureBufferFormatControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QCameraCaptureBufferFormatControl_Adaptor, QTimerEvent *>(&QCameraCaptureBufferFormatControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QCameraCaptureBufferFormatControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_bufferFormat_c0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_setBufferFormat_2758_0;
  gsi::Callback cb_supportedBufferFormats_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QCameraCaptureBufferFormatControl_Adaptor::~QCameraCaptureBufferFormatControl_Adaptor() { }

//  Constructor QCameraCaptureBufferFormatControl::QCameraCaptureBufferFormatControl() (adaptor class)

static void _init_ctor_QCameraCaptureBufferFormatControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraCaptureBufferFormatControl_Adaptor> ();
}

static void _call_ctor_QCameraCaptureBufferFormatControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraCaptureBufferFormatControl_Adaptor *> (new QCameraCaptureBufferFormatControl_Adaptor ());
}


// QVideoFrame::PixelFormat QCameraCaptureBufferFormatControl::bufferFormat()

static void _init_cbs_bufferFormat_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ();
}

static void _call_cbs_bufferFormat_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_bufferFormat_c0_0 ());
}

static void _set_callback_cbs_bufferFormat_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_bufferFormat_c0_0 = cb;
}


// void QCameraCaptureBufferFormatControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QCameraCaptureBufferFormatControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QCameraCaptureBufferFormatControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QCameraCaptureBufferFormatControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QCameraCaptureBufferFormatControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QCameraCaptureBufferFormatControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->fp_QCameraCaptureBufferFormatControl_isSignalConnected_c2394 (arg1));
}


// exposed int QCameraCaptureBufferFormatControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->fp_QCameraCaptureBufferFormatControl_receivers_c1731 (arg1));
}


// exposed QObject *QCameraCaptureBufferFormatControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->fp_QCameraCaptureBufferFormatControl_sender_c0 ());
}


// exposed int QCameraCaptureBufferFormatControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->fp_QCameraCaptureBufferFormatControl_senderSignalIndex_c0 ());
}


// void QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat format)

static void _init_cbs_setBufferFormat_2758_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setBufferFormat_2758_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & arg1 = args.read<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_setBufferFormat_2758_0 (arg1);
}

static void _set_callback_cbs_setBufferFormat_2758_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_setBufferFormat_2758_0 = cb;
}


// QList<QVideoFrame::PixelFormat> QCameraCaptureBufferFormatControl::supportedBufferFormats()

static void _init_cbs_supportedBufferFormats_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QVideoFrame::PixelFormat> > ();
}

static void _call_cbs_supportedBufferFormats_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QVideoFrame::PixelFormat> > ((QList<QVideoFrame::PixelFormat>)((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_supportedBufferFormats_c0_0 ());
}

static void _set_callback_cbs_supportedBufferFormats_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_supportedBufferFormats_c0_0 = cb;
}


// void QCameraCaptureBufferFormatControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraCaptureBufferFormatControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QCameraCaptureBufferFormatControl> &qtdecl_QCameraCaptureBufferFormatControl ();

static gsi::Methods methods_QCameraCaptureBufferFormatControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraCaptureBufferFormatControl::QCameraCaptureBufferFormatControl()\nThis method creates an object of class QCameraCaptureBufferFormatControl.", &_init_ctor_QCameraCaptureBufferFormatControl_Adaptor_0, &_call_ctor_QCameraCaptureBufferFormatControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("bufferFormat", "@brief Virtual method QVideoFrame::PixelFormat QCameraCaptureBufferFormatControl::bufferFormat()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_bufferFormat_c0_0, &_call_cbs_bufferFormat_c0_0);
  methods += new qt_gsi::GenericMethod ("bufferFormat", "@hide", true, &_init_cbs_bufferFormat_c0_0, &_call_cbs_bufferFormat_c0_0, &_set_callback_cbs_bufferFormat_c0_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QCameraCaptureBufferFormatControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QCameraCaptureBufferFormatControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QCameraCaptureBufferFormatControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QCameraCaptureBufferFormatControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QCameraCaptureBufferFormatControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QCameraCaptureBufferFormatControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QCameraCaptureBufferFormatControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QCameraCaptureBufferFormatControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QCameraCaptureBufferFormatControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setBufferFormat", "@brief Virtual method void QCameraCaptureBufferFormatControl::setBufferFormat(QVideoFrame::PixelFormat format)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setBufferFormat_2758_0, &_call_cbs_setBufferFormat_2758_0);
  methods += new qt_gsi::GenericMethod ("setBufferFormat", "@hide", false, &_init_cbs_setBufferFormat_2758_0, &_call_cbs_setBufferFormat_2758_0, &_set_callback_cbs_setBufferFormat_2758_0);
  methods += new qt_gsi::GenericMethod ("supportedBufferFormats", "@brief Virtual method QList<QVideoFrame::PixelFormat> QCameraCaptureBufferFormatControl::supportedBufferFormats()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedBufferFormats_c0_0, &_call_cbs_supportedBufferFormats_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedBufferFormats", "@hide", true, &_init_cbs_supportedBufferFormats_c0_0, &_call_cbs_supportedBufferFormats_c0_0, &_set_callback_cbs_supportedBufferFormats_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QCameraCaptureBufferFormatControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QCameraCaptureBufferFormatControl_Adaptor> decl_QCameraCaptureBufferFormatControl_Adaptor (qtdecl_QCameraCaptureBufferFormatControl (), "QtMultimedia", "QCameraCaptureBufferFormatControl",
  methods_QCameraCaptureBufferFormatControl_Adaptor (),
  "@qt\n@brief Binding of QCameraCaptureBufferFormatControl");

}

