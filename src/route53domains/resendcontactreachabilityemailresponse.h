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

#ifndef QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_H
#define QTAWS_RESENDCONTACTREACHABILITYEMAILRESPONSE_H

#include "route53domainsresponse.h"
#include "resendcontactreachabilityemailrequest.h"

namespace QtAws {
namespace Route53Domains {

class ResendContactReachabilityEmailResponsePrivate;

class QTAWS_EXPORT ResendContactReachabilityEmailResponse : public Route53DomainsResponse {
    Q_OBJECT

public:
    ResendContactReachabilityEmailResponse(const ResendContactReachabilityEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResendContactReachabilityEmailRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ResendContactReachabilityEmailResponse)
    Q_DISABLE_COPY(ResendContactReachabilityEmailResponse)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
