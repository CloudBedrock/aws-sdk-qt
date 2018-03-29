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

#include "detachinstancesfromloadbalancerresponse.h"
#include "detachinstancesfromloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  DetachInstancesFromLoadBalancerResponse
 *
 * @brief  Handles Lightsail DetachInstancesFromLoadBalancer responses.
 *
 * @see    LightsailClient::detachInstancesFromLoadBalancer
 */

/**
 * @brief  Constructs a new DetachInstancesFromLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachInstancesFromLoadBalancerResponse::DetachInstancesFromLoadBalancerResponse(
        const DetachInstancesFromLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new DetachInstancesFromLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DetachInstancesFromLoadBalancerRequest(request));
    setReply(reply);
}

const DetachInstancesFromLoadBalancerRequest * DetachInstancesFromLoadBalancerResponse::request() const
{
    Q_D(const DetachInstancesFromLoadBalancerResponse);
    return static_cast<const DetachInstancesFromLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail DetachInstancesFromLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DetachInstancesFromLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachInstancesFromLoadBalancerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachInstancesFromLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for DetachInstancesFromLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInstancesFromLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachInstancesFromLoadBalancerResponse instance.
 */
DetachInstancesFromLoadBalancerResponsePrivate::DetachInstancesFromLoadBalancerResponsePrivate(
    DetachInstancesFromLoadBalancerResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail DetachInstancesFromLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachInstancesFromLoadBalancerResponsePrivate::parseDetachInstancesFromLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachInstancesFromLoadBalancerResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
