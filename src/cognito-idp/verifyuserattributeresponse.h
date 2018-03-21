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

#ifndef QTAWS_VERIFYUSERATTRIBUTERESPONSE_H
#define QTAWS_VERIFYUSERATTRIBUTERESPONSE_H

#include "cognito-idpresponse.h"
#include "verifyuserattributerequest.h"

namespace AWS {

namespace cognito-idp {

class VerifyUserAttributeResponsePrivate;

class QTAWS_EXPORT VerifyUserAttributeResponse : public VerifyUserAttributeResponse {
    Q_OBJECT

public:
    VerifyUserAttributeResponse(const VerifyUserAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyUserAttributeRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(VerifyUserAttributeResponse)
    Q_DISABLE_COPY(VerifyUserAttributeResponse)

};

} // namespace cognito-idp
} // namespace AWS

#endif
