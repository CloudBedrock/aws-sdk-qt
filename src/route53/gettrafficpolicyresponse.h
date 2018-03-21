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

#ifndef QTAWS_GETTRAFFICPOLICYRESPONSE_H
#define QTAWS_GETTRAFFICPOLICYRESPONSE_H

#include "route53response.h"
#include "gettrafficpolicyrequest.h"

namespace AWS {

namespace Route53 {

class GetTrafficPolicyResponsePrivate;

class QTAWS_EXPORT GetTrafficPolicyResponse : public GetTrafficPolicyResponse {
    Q_OBJECT

public:
    GetTrafficPolicyResponse(const GetTrafficPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTrafficPolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetTrafficPolicyResponse)
    Q_DISABLE_COPY(GetTrafficPolicyResponse)

};

} // namespace Route53
} // namespace AWS

#endif
