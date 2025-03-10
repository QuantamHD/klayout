
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
*  @file gsiDeclQGenericPluginFactory.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGenericPluginFactory>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGenericPluginFactory

//  Constructor QGenericPluginFactory::QGenericPluginFactory()


static void _init_ctor_QGenericPluginFactory_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGenericPluginFactory> ();
}

static void _call_ctor_QGenericPluginFactory_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGenericPluginFactory *> (new QGenericPluginFactory ());
}


// static QObject *QGenericPluginFactory::create(const QString &, const QString &)


static void _init_f_create_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_f_create_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QObject * > ((QObject *)QGenericPluginFactory::create (arg1, arg2));
}


// static QStringList QGenericPluginFactory::keys()


static void _init_f_keys_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)QGenericPluginFactory::keys ());
}



namespace gsi
{

static gsi::Methods methods_QGenericPluginFactory () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGenericPluginFactory::QGenericPluginFactory()\nThis method creates an object of class QGenericPluginFactory.", &_init_ctor_QGenericPluginFactory_0, &_call_ctor_QGenericPluginFactory_0);
  methods += new qt_gsi::GenericStaticMethod ("qt_create", "@brief Static method QObject *QGenericPluginFactory::create(const QString &, const QString &)\nThis method is static and can be called without an instance.", &_init_f_create_3942, &_call_f_create_3942);
  methods += new qt_gsi::GenericStaticMethod ("keys", "@brief Static method QStringList QGenericPluginFactory::keys()\nThis method is static and can be called without an instance.", &_init_f_keys_0, &_call_f_keys_0);
  return methods;
}

gsi::Class<QGenericPluginFactory> decl_QGenericPluginFactory ("QtGui", "QGenericPluginFactory",
  methods_QGenericPluginFactory (),
  "@qt\n@brief Binding of QGenericPluginFactory");


GSI_QTGUI_PUBLIC gsi::Class<QGenericPluginFactory> &qtdecl_QGenericPluginFactory () { return decl_QGenericPluginFactory; }

}

