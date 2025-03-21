
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
*  @file gsiDeclQStyleOptionQ3ListView.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionQ3ListView>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionQ3ListView

//  Constructor QStyleOptionQ3ListView::QStyleOptionQ3ListView()


static void _init_ctor_QStyleOptionQ3ListView_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionQ3ListView> ();
}

static void _call_ctor_QStyleOptionQ3ListView_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionQ3ListView *> (new QStyleOptionQ3ListView ());
}


//  Constructor QStyleOptionQ3ListView::QStyleOptionQ3ListView(const QStyleOptionQ3ListView &other)


static void _init_ctor_QStyleOptionQ3ListView_3511 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionQ3ListView & > (argspec_0);
  decl->set_return_new<QStyleOptionQ3ListView> ();
}

static void _call_ctor_QStyleOptionQ3ListView_3511 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionQ3ListView &arg1 = gsi::arg_reader<const QStyleOptionQ3ListView & >() (args, heap);
  ret.write<QStyleOptionQ3ListView *> (new QStyleOptionQ3ListView (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionQ3ListView () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionQ3ListView::QStyleOptionQ3ListView()\nThis method creates an object of class QStyleOptionQ3ListView.", &_init_ctor_QStyleOptionQ3ListView_0, &_call_ctor_QStyleOptionQ3ListView_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionQ3ListView::QStyleOptionQ3ListView(const QStyleOptionQ3ListView &other)\nThis method creates an object of class QStyleOptionQ3ListView.", &_init_ctor_QStyleOptionQ3ListView_3511, &_call_ctor_QStyleOptionQ3ListView_3511);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionQ3ListView> decl_QStyleOptionQ3ListView (qtdecl_QStyleOptionComplex (), "QtGui", "QStyleOptionQ3ListView",
  methods_QStyleOptionQ3ListView (),
  "@qt\n@brief Binding of QStyleOptionQ3ListView");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionQ3ListView> &qtdecl_QStyleOptionQ3ListView () { return decl_QStyleOptionQ3ListView; }

}

