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

#include "deleteuserpolicyresponse.h"
#include "deleteuserpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  DeleteUserPolicyResponse
 *
 * @brief  Handles IAM DeleteUserPolicy responses.
 *
 * @see    IAMClient::deleteUserPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteUserPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteUserPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteUserPolicyRequest(request));
    setReply(reply);
}

const DeleteUserPolicyRequest * DeleteUserPolicyResponse::request() const
{
    Q_D(const DeleteUserPolicyResponse);
    return static_cast<const DeleteUserPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteUserPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteUserPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteUserPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteUserPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteUserPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteUserPolicyResponse instance.
 */
DeleteUserPolicyResponsePrivate::DeleteUserPolicyResponsePrivate(
    DeleteUserPolicyQueueResponse * const q) : DeleteUserPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteUserPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteUserPolicyResponsePrivate::DeleteUserPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUserPolicyResponse"));
    /// @todo
}
