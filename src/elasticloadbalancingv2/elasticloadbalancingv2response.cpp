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

#include "elasticloadbalancingv2response.h"
#include "elasticloadbalancingv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2Response
 *
 * \brief The ElasticLoadBalancingv2Response class is the base class for all ElasticLoadBalancingv2 responses.
 *
 * \ingroup ElasticLoadBalancingv2
 */

/*!
 * @brief  Constructs a new ElasticLoadBalancingv2Response object.
 *
 * @param  parent   This object's parent.
 */
ElasticLoadBalancingv2Response::ElasticLoadBalancingv2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ElasticLoadBalancingv2ResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2Response object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticLoadBalancingv2ResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
ElasticLoadBalancingv2Response::ElasticLoadBalancingv2Response(ElasticLoadBalancingv2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ElasticLoadBalancingv2Response::parseFailure(QIODevice &response)
{
    Q_D(ElasticLoadBalancingv2Response);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * @internal
 *
 * @class  ElasticLoadBalancingv2ResponsePrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingv2Response.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingv2Response instance.
 */
ElasticLoadBalancingv2ResponsePrivate::ElasticLoadBalancingv2ResponsePrivate(
    ElasticLoadBalancingv2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
