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

#include "describevolumesmodificationsresponse.h"
#include "describevolumesmodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVolumesModificationsResponse
 *
 * \brief The DescribeVolumesModificationsResponse class provides an interace for EC2 DescribeVolumesModifications responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVolumesModifications
 */

/*!
 * @brief  Constructs a new DescribeVolumesModificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVolumesModificationsResponse::DescribeVolumesModificationsResponse(
        const DescribeVolumesModificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVolumesModificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesModificationsRequest(request));
    setReply(reply);
}

const DescribeVolumesModificationsRequest * DescribeVolumesModificationsResponse::request() const
{
    Q_D(const DescribeVolumesModificationsResponse);
    return static_cast<const DescribeVolumesModificationsRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DescribeVolumesModifications response.
 *
 * @param  response  Response to parse.
 */
void DescribeVolumesModificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVolumesModificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeVolumesModificationsResponsePrivate
 *
 * \brief Private implementation for DescribeVolumesModificationsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeVolumesModificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVolumesModificationsResponse instance.
 */
DescribeVolumesModificationsResponsePrivate::DescribeVolumesModificationsResponsePrivate(
    DescribeVolumesModificationsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DescribeVolumesModificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVolumesModificationsResponsePrivate::parseDescribeVolumesModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesModificationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
