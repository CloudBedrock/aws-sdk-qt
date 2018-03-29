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

#include "deregistertargetsresponse.h"
#include "deregistertargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeregisterTargetsResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DeregisterTargets responses.
 *
 * @see    ElasticLoadBalancingv2Client::deregisterTargets
 */

/**
 * @brief  Constructs a new DeregisterTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterTargetsResponse::DeregisterTargetsResponse(
        const DeregisterTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeregisterTargetsResponsePrivate(this), parent)
{
    setRequest(new DeregisterTargetsRequest(request));
    setReply(reply);
}

const DeregisterTargetsRequest * DeregisterTargetsResponse::request() const
{
    Q_D(const DeregisterTargetsResponse);
    return static_cast<const DeregisterTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DeregisterTargets response.
 *
 * @param  response  Response to parse.
 */
void DeregisterTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterTargetsResponsePrivate
 *
 * @brief  Private implementation for DeregisterTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterTargetsResponse instance.
 */
DeregisterTargetsResponsePrivate::DeregisterTargetsResponsePrivate(
    DeregisterTargetsResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DeregisterTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterTargetsResponsePrivate::parseDeregisterTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTargetsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
