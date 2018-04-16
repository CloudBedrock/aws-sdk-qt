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

#include "enablevpcclassiclinkresponse.h"
#include "enablevpcclassiclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::EnableVpcClassicLinkResponse
 *
 * \brief The EnableVpcClassicLinkResponse class encapsulates EC2 EnableVpcClassicLink responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::enableVpcClassicLink
 */

/*!
 * @brief  Constructs a new EnableVpcClassicLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableVpcClassicLinkResponse::EnableVpcClassicLinkResponse(
        const EnableVpcClassicLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new EnableVpcClassicLinkResponsePrivate(this), parent)
{
    setRequest(new EnableVpcClassicLinkRequest(request));
    setReply(reply);
}

const EnableVpcClassicLinkRequest * EnableVpcClassicLinkResponse::request() const
{
    Q_D(const EnableVpcClassicLinkResponse);
    return static_cast<const EnableVpcClassicLinkRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 EnableVpcClassicLink response.
 *
 * @param  response  Response to parse.
 */
void EnableVpcClassicLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableVpcClassicLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class EnableVpcClassicLinkResponsePrivate
 *
 * \brief Private implementation for EnableVpcClassicLinkResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new EnableVpcClassicLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableVpcClassicLinkResponse instance.
 */
EnableVpcClassicLinkResponsePrivate::EnableVpcClassicLinkResponsePrivate(
    EnableVpcClassicLinkResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 EnableVpcClassicLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableVpcClassicLinkResponsePrivate::parseEnableVpcClassicLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableVpcClassicLinkResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
