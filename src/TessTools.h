/**********************************************************************
* File:        TessTools.h
* Description: Tesseract tools
* Author:      Zdenko Podobny
* Created:     2012-03-27
*
* (C) Copyright 2012, Zdenko Podobny
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**    http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*
**********************************************************************/

#ifndef SRC_INCLUDE_TESSTOOLS_H_
#define SRC_INCLUDE_TESSTOOLS_H_

#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include "TessTools.h"
#include <QtCore/QString>
#include <QtGui/QImage>

class TessTools {

public:
  TessTools();
  ~TessTools();
  QString makeBoxes(const QImage &qImage);
  static PIX* qImage2PIX(const QImage &qImage);
  static QImage PIX2qImage(PIX *pixImage);
  QList<QString> getLanguages(QString datapath);

private:
  QString getDataPath();
  QString getLang();
  void msg(QString messageText);
  static const char *kTrainedDataSuffix;
};

#endif  // SRC_INCLUDE_TESSTOOLS_H_
