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

#include "createtrafficpolicyversionresponse.h"
#include "createtrafficpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  CreateTrafficPolicyVersionResponse
 *
 * @brief  Handles Route53 CreateTrafficPolicyVersion responses.
 *
 * @see    Route53Client::createTrafficPolicyVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTrafficPolicyVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateTrafficPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreateTrafficPolicyVersionRequest(request));
    setReply(reply);
}

const CreateTrafficPolicyVersionRequest * CreateTrafficPolicyVersionResponse::request() const
{
    Q_D(const CreateTrafficPolicyVersionResponse);
    return static_cast<const CreateTrafficPolicyVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 CreateTrafficPolicyVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateTrafficPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTrafficPolicyVersionResponsePrivate
 *
 * @brief  Private implementation for CreateTrafficPolicyVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrafficPolicyVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTrafficPolicyVersionResponse instance.
 */
CreateTrafficPolicyVersionResponsePrivate::CreateTrafficPolicyVersionResponsePrivate(
    CreateTrafficPolicyVersionQueueResponse * const q) : CreateTrafficPolicyVersionPrivate(q)
{

}

/**
 * @brief  Parse an Route53 CreateTrafficPolicyVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTrafficPolicyVersionResponsePrivate::CreateTrafficPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTrafficPolicyVersionResponse"));
    /// @todo
}
