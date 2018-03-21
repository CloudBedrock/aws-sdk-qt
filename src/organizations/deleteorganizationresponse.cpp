/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteorganizationresponse.h"
#include "deleteorganizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DeleteOrganizationResponse
 *
 * @brief  Handles Organizations DeleteOrganization responses.
 *
 * @see    OrganizationsClient::deleteOrganization
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOrganizationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DeleteOrganizationResponsePrivate(this), parent)
{
    setRequest(new DeleteOrganizationRequest(request));
    setReply(reply);
}

const DeleteOrganizationRequest * DeleteOrganizationResponse::request() const
{
    Q_D(const DeleteOrganizationResponse);
    return static_cast<const DeleteOrganizationRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DeleteOrganization response.
 *
 * @param  response  Response to parse.
 */
void DeleteOrganizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOrganizationResponsePrivate
 *
 * @brief  Private implementation for DeleteOrganizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOrganizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOrganizationResponse instance.
 */
DeleteOrganizationResponsePrivate::DeleteOrganizationResponsePrivate(
    DeleteOrganizationQueueResponse * const q) : DeleteOrganizationPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DeleteOrganizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOrganizationResponsePrivate::DeleteOrganizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOrganizationResponse"));
    /// @todo
}
