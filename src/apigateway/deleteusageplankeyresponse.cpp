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

#include "deleteusageplankeyresponse.h"
#include "deleteusageplankeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteUsagePlanKeyResponse
 *
 * \brief The DeleteUsagePlanKeyResponse class provides an interace for APIGateway DeleteUsagePlanKey responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteUsagePlanKey
 */

/*!
 * @brief  Constructs a new DeleteUsagePlanKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUsagePlanKeyResponse::DeleteUsagePlanKeyResponse(
        const DeleteUsagePlanKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteUsagePlanKeyResponsePrivate(this), parent)
{
    setRequest(new DeleteUsagePlanKeyRequest(request));
    setReply(reply);
}

const DeleteUsagePlanKeyRequest * DeleteUsagePlanKeyResponse::request() const
{
    Q_D(const DeleteUsagePlanKeyResponse);
    return static_cast<const DeleteUsagePlanKeyRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway DeleteUsagePlanKey response.
 *
 * @param  response  Response to parse.
 */
void DeleteUsagePlanKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteUsagePlanKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteUsagePlanKeyResponsePrivate
 *
 * \brief Private implementation for DeleteUsagePlanKeyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteUsagePlanKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUsagePlanKeyResponse instance.
 */
DeleteUsagePlanKeyResponsePrivate::DeleteUsagePlanKeyResponsePrivate(
    DeleteUsagePlanKeyResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway DeleteUsagePlanKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUsagePlanKeyResponsePrivate::parseDeleteUsagePlanKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUsagePlanKeyResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
