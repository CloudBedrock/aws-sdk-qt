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

#include "createvpcendpointresponse.h"
#include "createvpcendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcEndpointResponse
 *
 * \brief The CreateVpcEndpointResponse class provides an interace for EC2 CreateVpcEndpoint responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createVpcEndpoint
 */

/*!
 * @brief  Constructs a new CreateVpcEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcEndpointResponse::CreateVpcEndpointResponse(
        const CreateVpcEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CreateVpcEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateVpcEndpointRequest(request));
    setReply(reply);
}

const CreateVpcEndpointRequest * CreateVpcEndpointResponse::request() const
{
    Q_D(const CreateVpcEndpointResponse);
    return static_cast<const CreateVpcEndpointRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 CreateVpcEndpoint response.
 *
 * @param  response  Response to parse.
 */
void CreateVpcEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateVpcEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateVpcEndpointResponsePrivate
 *
 * \brief Private implementation for CreateVpcEndpointResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateVpcEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateVpcEndpointResponse instance.
 */
CreateVpcEndpointResponsePrivate::CreateVpcEndpointResponsePrivate(
    CreateVpcEndpointResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 CreateVpcEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateVpcEndpointResponsePrivate::parseCreateVpcEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVpcEndpointResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
