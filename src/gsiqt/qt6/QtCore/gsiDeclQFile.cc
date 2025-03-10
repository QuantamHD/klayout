
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
*  @file gsiDeclQFile.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFile>
#include <QDateTime>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFile

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QFile::staticMetaObject);
}


//  Constructor QFile::QFile()


static void _init_ctor_QFile_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFile> ();
}

static void _call_ctor_QFile_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFile *> (new QFile ());
}


//  Constructor QFile::QFile(const QString &name)


static void _init_ctor_QFile_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QFile> ();
}

static void _call_ctor_QFile_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QFile *> (new QFile (arg1));
}


//  Constructor QFile::QFile(QObject *parent)


static void _init_ctor_QFile_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QFile> ();
}

static void _call_ctor_QFile_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QFile *> (new QFile (arg1));
}


//  Constructor QFile::QFile(const QString &name, QObject *parent)


static void _init_ctor_QFile_3219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QFile> ();
}

static void _call_ctor_QFile_3219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QFile *> (new QFile (arg1, arg2));
}


// bool QFile::copy(const QString &newName)


static void _init_f_copy_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_copy_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->copy (arg1));
}


// bool QFile::exists()


static void _init_f_exists_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_exists_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFile *)cls)->exists ());
}


// QString QFile::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFile *)cls)->fileName ());
}


// bool QFile::link(const QString &newName)


static void _init_f_link_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_link_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->link (arg1));
}


// bool QFile::moveToTrash()


static void _init_f_moveToTrash_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_moveToTrash_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFile *)cls)->moveToTrash ());
}


// bool QFile::open(QFlags<QIODeviceBase::OpenModeFlag> flags)


static void _init_f_open_3621 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QIODeviceBase::OpenModeFlag> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_open_3621 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QIODeviceBase::OpenModeFlag> arg1 = gsi::arg_reader<QFlags<QIODeviceBase::OpenModeFlag> >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->open (arg1));
}


// QFlags<QFileDevice::Permission> QFile::permissions()


static void _init_f_permissions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QFileDevice::Permission> > ();
}

static void _call_f_permissions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QFileDevice::Permission> > ((QFlags<QFileDevice::Permission>)((QFile *)cls)->permissions ());
}


// bool QFile::remove()


static void _init_f_remove_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_remove_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFile *)cls)->remove ());
}


// bool QFile::rename(const QString &newName)


static void _init_f_rename_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("newName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_rename_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->rename (arg1));
}


// bool QFile::resize(qint64 sz)


static void _init_f_resize_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sz");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_resize_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->resize (arg1));
}


// void QFile::setFileName(const QString &name)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QFile *)cls)->setFileName (arg1);
}


// bool QFile::setPermissions(QFlags<QFileDevice::Permission> permissionSpec)


static void _init_f_setPermissions_3370 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("permissionSpec");
  decl->add_arg<QFlags<QFileDevice::Permission> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setPermissions_3370 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QFileDevice::Permission> arg1 = gsi::arg_reader<QFlags<QFileDevice::Permission> >() (args, heap);
  ret.write<bool > ((bool)((QFile *)cls)->setPermissions (arg1));
}


// qint64 QFile::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QFile *)cls)->size ());
}


// QString QFile::symLinkTarget()


static void _init_f_symLinkTarget_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_symLinkTarget_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QFile *)cls)->symLinkTarget ());
}


// static bool QFile::copy(const QString &fileName, const QString &newName)


static void _init_f_copy_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("newName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_copy_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFile::copy (arg1, arg2));
}


// static QString QFile::decodeName(const char *localFileName)


static void _init_f_decodeName_1731 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("localFileName");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_decodeName_1731 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QString > ((QString)QFile::decodeName (arg1));
}


// static QByteArray QFile::encodeName(const QString &fileName)


static void _init_f_encodeName_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_encodeName_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QFile::encodeName (arg1));
}


// static bool QFile::exists(const QString &fileName)


static void _init_f_exists_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_exists_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFile::exists (arg1));
}


// static bool QFile::link(const QString &oldname, const QString &newName)


static void _init_f_link_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("oldname");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("newName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_link_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFile::link (arg1, arg2));
}


// static bool QFile::moveToTrash(const QString &fileName, QString *pathInTrash)


static void _init_f_moveToTrash_3251 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pathInTrash", true, "nullptr");
  decl->add_arg<QString * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_moveToTrash_3251 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QString *arg2 = args ? gsi::arg_reader<QString * >() (args, heap) : gsi::arg_maker<QString * >() (nullptr, heap);
  ret.write<bool > ((bool)QFile::moveToTrash (arg1, arg2));
}


// static QFlags<QFileDevice::Permission> QFile::permissions(const QString &filename)


static void _init_f_permissions_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QFlags<QFileDevice::Permission> > ();
}

static void _call_f_permissions_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QFlags<QFileDevice::Permission> > ((QFlags<QFileDevice::Permission>)QFile::permissions (arg1));
}


// static bool QFile::remove(const QString &fileName)


static void _init_f_remove_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_remove_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFile::remove (arg1));
}


// static bool QFile::rename(const QString &oldName, const QString &newName)


static void _init_f_rename_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("oldName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("newName");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_rename_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)QFile::rename (arg1, arg2));
}


// static bool QFile::resize(const QString &filename, qint64 sz)


static void _init_f_resize_2903 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("sz");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_resize_2903 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<bool > ((bool)QFile::resize (arg1, arg2));
}


// static bool QFile::setPermissions(const QString &filename, QFlags<QFileDevice::Permission> permissionSpec)


static void _init_f_setPermissions_5287 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("permissionSpec");
  decl->add_arg<QFlags<QFileDevice::Permission> > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_setPermissions_5287 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QFlags<QFileDevice::Permission> arg2 = gsi::arg_reader<QFlags<QFileDevice::Permission> >() (args, heap);
  ret.write<bool > ((bool)QFile::setPermissions (arg1, arg2));
}


// static QString QFile::symLinkTarget(const QString &fileName)


static void _init_f_symLinkTarget_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_symLinkTarget_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)QFile::symLinkTarget (arg1));
}


// static QString QFile::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QFile::tr (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QFile () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFile::QFile()\nThis method creates an object of class QFile.", &_init_ctor_QFile_0, &_call_ctor_QFile_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFile::QFile(const QString &name)\nThis method creates an object of class QFile.", &_init_ctor_QFile_2025, &_call_ctor_QFile_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFile::QFile(QObject *parent)\nThis method creates an object of class QFile.", &_init_ctor_QFile_1302, &_call_ctor_QFile_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFile::QFile(const QString &name, QObject *parent)\nThis method creates an object of class QFile.", &_init_ctor_QFile_3219, &_call_ctor_QFile_3219);
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("copy", "@brief Method bool QFile::copy(const QString &newName)\n", false, &_init_f_copy_2025, &_call_f_copy_2025);
  methods += new qt_gsi::GenericMethod ("exists", "@brief Method bool QFile::exists()\n", true, &_init_f_exists_c0, &_call_f_exists_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QFile::fileName()\nThis is a reimplementation of QFileDevice::fileName", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("link", "@brief Method bool QFile::link(const QString &newName)\n", false, &_init_f_link_2025, &_call_f_link_2025);
  methods += new qt_gsi::GenericMethod ("moveToTrash", "@brief Method bool QFile::moveToTrash()\n", false, &_init_f_moveToTrash_0, &_call_f_moveToTrash_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method bool QFile::open(QFlags<QIODeviceBase::OpenModeFlag> flags)\nThis is a reimplementation of QIODevice::open", false, &_init_f_open_3621, &_call_f_open_3621);
  methods += new qt_gsi::GenericMethod ("permissions", "@brief Method QFlags<QFileDevice::Permission> QFile::permissions()\nThis is a reimplementation of QFileDevice::permissions", true, &_init_f_permissions_c0, &_call_f_permissions_c0);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method bool QFile::remove()\n", false, &_init_f_remove_0, &_call_f_remove_0);
  methods += new qt_gsi::GenericMethod ("rename", "@brief Method bool QFile::rename(const QString &newName)\n", false, &_init_f_rename_2025, &_call_f_rename_2025);
  methods += new qt_gsi::GenericMethod ("resize", "@brief Method bool QFile::resize(qint64 sz)\nThis is a reimplementation of QFileDevice::resize", false, &_init_f_resize_986, &_call_f_resize_986);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QFile::setFileName(const QString &name)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setPermissions", "@brief Method bool QFile::setPermissions(QFlags<QFileDevice::Permission> permissionSpec)\nThis is a reimplementation of QFileDevice::setPermissions", false, &_init_f_setPermissions_3370, &_call_f_setPermissions_3370);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qint64 QFile::size()\nThis is a reimplementation of QFileDevice::size", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("symLinkTarget", "@brief Method QString QFile::symLinkTarget()\n", true, &_init_f_symLinkTarget_c0, &_call_f_symLinkTarget_c0);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QFile::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QFile::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int, qint64 > ("channelBytesWritten(int, qint64)", "channelBytesWritten", gsi::arg("channel"), gsi::arg("bytes"), "@brief Signal declaration for QFile::channelBytesWritten(int channel, qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<int > ("channelReadyRead(int)", "channelReadyRead", gsi::arg("channel"), "@brief Signal declaration for QFile::channelReadyRead(int channel)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QFile::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QFile::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QFile::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QFile::readyRead()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("copy", "@brief Static method bool QFile::copy(const QString &fileName, const QString &newName)\nThis method is static and can be called without an instance.", &_init_f_copy_3942, &_call_f_copy_3942);
  methods += new qt_gsi::GenericStaticMethod ("decodeName", "@brief Static method QString QFile::decodeName(const char *localFileName)\nThis method is static and can be called without an instance.", &_init_f_decodeName_1731, &_call_f_decodeName_1731);
  methods += new qt_gsi::GenericStaticMethod ("encodeName", "@brief Static method QByteArray QFile::encodeName(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_encodeName_2025, &_call_f_encodeName_2025);
  methods += new qt_gsi::GenericStaticMethod ("exists", "@brief Static method bool QFile::exists(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_exists_2025, &_call_f_exists_2025);
  methods += new qt_gsi::GenericStaticMethod ("link", "@brief Static method bool QFile::link(const QString &oldname, const QString &newName)\nThis method is static and can be called without an instance.", &_init_f_link_3942, &_call_f_link_3942);
  methods += new qt_gsi::GenericStaticMethod ("moveToTrash", "@brief Static method bool QFile::moveToTrash(const QString &fileName, QString *pathInTrash)\nThis method is static and can be called without an instance.", &_init_f_moveToTrash_3251, &_call_f_moveToTrash_3251);
  methods += new qt_gsi::GenericStaticMethod ("permissions", "@brief Static method QFlags<QFileDevice::Permission> QFile::permissions(const QString &filename)\nThis method is static and can be called without an instance.", &_init_f_permissions_2025, &_call_f_permissions_2025);
  methods += new qt_gsi::GenericStaticMethod ("remove", "@brief Static method bool QFile::remove(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_remove_2025, &_call_f_remove_2025);
  methods += new qt_gsi::GenericStaticMethod ("rename", "@brief Static method bool QFile::rename(const QString &oldName, const QString &newName)\nThis method is static and can be called without an instance.", &_init_f_rename_3942, &_call_f_rename_3942);
  methods += new qt_gsi::GenericStaticMethod ("resize", "@brief Static method bool QFile::resize(const QString &filename, qint64 sz)\nThis method is static and can be called without an instance.", &_init_f_resize_2903, &_call_f_resize_2903);
  methods += new qt_gsi::GenericStaticMethod ("setPermissions", "@brief Static method bool QFile::setPermissions(const QString &filename, QFlags<QFileDevice::Permission> permissionSpec)\nThis method is static and can be called without an instance.", &_init_f_setPermissions_5287, &_call_f_setPermissions_5287);
  methods += new qt_gsi::GenericStaticMethod ("symLinkTarget", "@brief Static method QString QFile::symLinkTarget(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_symLinkTarget_2025, &_call_f_symLinkTarget_2025);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QFile::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QFileDevice> &qtdecl_QFileDevice ();

qt_gsi::QtNativeClass<QFile> decl_QFile (qtdecl_QFileDevice (), "QtCore", "QFile",
  methods_QFile (),
  "@qt\n@brief Binding of QFile");


GSI_QTCORE_PUBLIC gsi::Class<QFile> &qtdecl_QFile () { return decl_QFile; }

}

