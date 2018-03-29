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

#include "authorizecachesecuritygroupingressresponse.h"
#include "authorizecachesecuritygroupingressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/**
 * @class  AuthorizeCacheSecurityGroupIngressResponse
 *
 * @brief  Handles ElastiCache AuthorizeCacheSecurityGroupIngress responses.
 *
 * @see    ElastiCacheClient::authorizeCacheSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeCacheSecurityGroupIngressResponse::AuthorizeCacheSecurityGroupIngressResponse(
        const AuthorizeCacheSecurityGroupIngressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuthorizeCacheSecurityGroupIngressResponse(new AuthorizeCacheSecurityGroupIngressResponsePrivate(this), parent)
{
    setRequest(new AuthorizeCacheSecurityGroupIngressRequest(request));
    setReply(reply);
}

const AuthorizeCacheSecurityGroupIngressRequest * AuthorizeCacheSecurityGroupIngressResponse::request() const
{
    Q_D(const AuthorizeCacheSecurityGroupIngressResponse);
    return static_cast<const AuthorizeCacheSecurityGroupIngressRequest *>(d->request);
}

/**
 * @brief  Parse a ElastiCache AuthorizeCacheSecurityGroupIngress response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeCacheSecurityGroupIngressResponse::parseSuccess(QIODevice &response)
{
    Q_D(AuthorizeCacheSecurityGroupIngressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeCacheSecurityGroupIngressResponsePrivate
 *
 * @brief  Private implementation for AuthorizeCacheSecurityGroupIngressResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeCacheSecurityGroupIngressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeCacheSecurityGroupIngressResponse instance.
 */
AuthorizeCacheSecurityGroupIngressResponsePrivate::AuthorizeCacheSecurityGroupIngressResponsePrivate(
    AuthorizeCacheSecurityGroupIngressResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElastiCache AuthorizeCacheSecurityGroupIngressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeCacheSecurityGroupIngressResponsePrivate::parseAuthorizeCacheSecurityGroupIngressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeCacheSecurityGroupIngressResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
