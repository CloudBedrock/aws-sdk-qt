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

#include "deletevpcendpointsresponse.h"
#include "deletevpcendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcEndpointsResponse
 *
 * \brief The DeleteVpcEndpointsResponse class encapsulates EC2 DeleteVpcEndpoints responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteVpcEndpoints
 */

/*!
 * @brief  Constructs a new DeleteVpcEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcEndpointsResponse::DeleteVpcEndpointsResponse(
        const DeleteVpcEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteVpcEndpointsResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcEndpointsRequest(request));
    setReply(reply);
}

const DeleteVpcEndpointsRequest * DeleteVpcEndpointsResponse::request() const
{
    Q_D(const DeleteVpcEndpointsResponse);
    return static_cast<const DeleteVpcEndpointsRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DeleteVpcEndpoints response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteVpcEndpointsResponsePrivate
 *
 * \brief Private implementation for DeleteVpcEndpointsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVpcEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcEndpointsResponse instance.
 */
DeleteVpcEndpointsResponsePrivate::DeleteVpcEndpointsResponsePrivate(
    DeleteVpcEndpointsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DeleteVpcEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcEndpointsResponsePrivate::parseDeleteVpcEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcEndpointsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
