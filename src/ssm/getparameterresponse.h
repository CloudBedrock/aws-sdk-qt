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

#ifndef QTAWS_GETPARAMETERRESPONSE_H
#define QTAWS_GETPARAMETERRESPONSE_H

#include "ssmresponse.h"
#include "getparameterrequest.h"

namespace QtAws {
namespace SSM {

class GetParameterResponsePrivate;

class QTAWS_EXPORT GetParameterResponse : public SSMResponse {
    Q_OBJECT

public:
    GetParameterResponse(const GetParameterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParameterRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetParameterResponse)
    Q_DISABLE_COPY(GetParameterResponse)

};

} // namespace SSM
} // namespace QtAws

#endif
