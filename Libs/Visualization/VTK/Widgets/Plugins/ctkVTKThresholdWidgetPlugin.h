/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

#ifndef __ctkVTKThresholdWidgetPlugin_h
#define __ctkVTKThresholdWidgetPlugin_h

// CTK includes
#include "ctkVTKWidgetsAbstractPlugin.h"

class CTK_VISUALIZATION_VTK_WIDGETS_PLUGINS_EXPORT ctkVTKThresholdWidgetPlugin :
  public QObject,
  public ctkVTKWidgetsAbstractPlugin
{
  Q_OBJECT

public:
  ctkVTKThresholdWidgetPlugin(QObject *parent = 0);

  QWidget *createWidget(QWidget *parent);
  QString domXml() const;
  QString includeFile() const;
  bool isContainer() const;
  QString name() const;
};

#endif
