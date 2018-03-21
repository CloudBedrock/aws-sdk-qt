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

#ifndef QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_H
#define QTAWS_AUTHORIZECACHESECURITYGROUPINGRESSREQUEST_H

#include "elasticacherequest.h"

namespace AWS {

namespace ElastiCache {

class AuthorizeCacheSecurityGroupIngressRequestPrivate;

class QTAWS_EXPORT AuthorizeCacheSecurityGroupIngressRequest : public ElastiCacheRequest {

public:
    AuthorizeCacheSecurityGroupIngressRequest(const AuthorizeCacheSecurityGroupIngressRequest &other);
    AuthorizeCacheSecurityGroupIngressRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(AuthorizeCacheSecurityGroupIngressRequest)

}

} // namespace ElastiCache
} // namespace AWS

#endif
