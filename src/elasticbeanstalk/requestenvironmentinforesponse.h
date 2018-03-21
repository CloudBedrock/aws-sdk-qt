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

#ifndef QTAWS_REQUESTENVIRONMENTINFORESPONSE_H
#define QTAWS_REQUESTENVIRONMENTINFORESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "requestenvironmentinforequest.h"

namespace AWS {

namespace elasticbeanstalk {

class RequestEnvironmentInfoResponsePrivate;

class QTAWS_EXPORT RequestEnvironmentInfoResponse : public RequestEnvironmentInfoResponse {
    Q_OBJECT

public:
    RequestEnvironmentInfoResponse(const RequestEnvironmentInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestEnvironmentInfoRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(RequestEnvironmentInfoResponse)
    Q_DISABLE_COPY(RequestEnvironmentInfoResponse)

};

} // namespace elasticbeanstalk
} // namespace AWS

#endif
