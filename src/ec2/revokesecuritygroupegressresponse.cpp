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

#include "revokesecuritygroupegressresponse.h"
#include "revokesecuritygroupegressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::RevokeSecurityGroupEgressResponse
 *
 * \brief The RevokeSecurityGroupEgressResponse class provides an interace for EC2 RevokeSecurityGroupEgress responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::revokeSecurityGroupEgress
 */

/*!
 * @brief  Constructs a new RevokeSecurityGroupEgressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeSecurityGroupEgressResponse::RevokeSecurityGroupEgressResponse(
        const RevokeSecurityGroupEgressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RevokeSecurityGroupEgressResponsePrivate(this), parent)
{
    setRequest(new RevokeSecurityGroupEgressRequest(request));
    setReply(reply);
}

const RevokeSecurityGroupEgressRequest * RevokeSecurityGroupEgressResponse::request() const
{
    Q_D(const RevokeSecurityGroupEgressResponse);
    return static_cast<const RevokeSecurityGroupEgressRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 RevokeSecurityGroupEgress response.
 *
 * @param  response  Response to parse.
 */
void RevokeSecurityGroupEgressResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeSecurityGroupEgressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class RevokeSecurityGroupEgressResponsePrivate
 *
 * \brief Private implementation for RevokeSecurityGroupEgressResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RevokeSecurityGroupEgressResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeSecurityGroupEgressResponse instance.
 */
RevokeSecurityGroupEgressResponsePrivate::RevokeSecurityGroupEgressResponsePrivate(
    RevokeSecurityGroupEgressResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 RevokeSecurityGroupEgressResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeSecurityGroupEgressResponsePrivate::parseRevokeSecurityGroupEgressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSecurityGroupEgressResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
