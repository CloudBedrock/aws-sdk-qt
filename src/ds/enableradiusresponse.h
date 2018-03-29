/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ENABLERADIUSRESPONSE_H
#define QTAWS_ENABLERADIUSRESPONSE_H

#include "directoryserviceresponse.h"
#include "enableradiusrequest.h"

namespace AWS {

namespace DirectoryService {

class EnableRadiusResponsePrivate;

class QTAWS_EXPORT EnableRadiusResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    EnableRadiusResponse(const EnableRadiusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableRadiusRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(EnableRadiusResponse)
    Q_DISABLE_COPY(EnableRadiusResponse)

};

} // namespace DirectoryService
} // namespace AWS

#endif
