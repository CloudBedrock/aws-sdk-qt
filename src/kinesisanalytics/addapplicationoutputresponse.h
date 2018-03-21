/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_H
#define QTAWS_ADDAPPLICATIONOUTPUTRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "addapplicationoutputrequest.h"

namespace AWS {

namespace kinesisanalytics {

class AddApplicationOutputResponsePrivate;

class QTAWS_EXPORT AddApplicationOutputResponse : public AddApplicationOutputResponse {
    Q_OBJECT

public:
    AddApplicationOutputResponse(const AddApplicationOutputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationOutputRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AddApplicationOutputResponse)
    Q_DISABLE_COPY(AddApplicationOutputResponse)

};

} // namespace kinesisanalytics
} // namespace AWS

#endif
