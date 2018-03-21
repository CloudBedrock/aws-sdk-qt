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

#include "deleteenvironmentmembershipresponse.h"
#include "deleteenvironmentmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  DeleteEnvironmentMembershipResponse
 *
 * @brief  Handles Cloud9 DeleteEnvironmentMembership responses.
 *
 * @see    Cloud9Client::deleteEnvironmentMembership
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEnvironmentMembershipResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new DeleteEnvironmentMembershipResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentMembershipRequest(request));
    setReply(reply);
}

const DeleteEnvironmentMembershipRequest * DeleteEnvironmentMembershipResponse::request() const
{
    Q_D(const DeleteEnvironmentMembershipResponse);
    return static_cast<const DeleteEnvironmentMembershipRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 DeleteEnvironmentMembership response.
 *
 * @param  response  Response to parse.
 */
void DeleteEnvironmentMembershipResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentMembershipResponsePrivate
 *
 * @brief  Private implementation for DeleteEnvironmentMembershipResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentMembershipResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEnvironmentMembershipResponse instance.
 */
DeleteEnvironmentMembershipResponsePrivate::DeleteEnvironmentMembershipResponsePrivate(
    DeleteEnvironmentMembershipQueueResponse * const q) : DeleteEnvironmentMembershipPrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 DeleteEnvironmentMembershipResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEnvironmentMembershipResponsePrivate::DeleteEnvironmentMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentMembershipResponse"));
    /// @todo
}
