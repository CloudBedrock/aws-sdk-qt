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

#include "setstackpolicyresponse.h"
#include "setstackpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  SetStackPolicyResponse
 *
 * @brief  Handles CloudFormation SetStackPolicy responses.
 *
 * @see    CloudFormationClient::setStackPolicy
 */

/**
 * @brief  Constructs a new SetStackPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetStackPolicyResponse::SetStackPolicyResponse(
        const SetStackPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new SetStackPolicyResponsePrivate(this), parent)
{
    setRequest(new SetStackPolicyRequest(request));
    setReply(reply);
}

const SetStackPolicyRequest * SetStackPolicyResponse::request() const
{
    Q_D(const SetStackPolicyResponse);
    return static_cast<const SetStackPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation SetStackPolicy response.
 *
 * @param  response  Response to parse.
 */
void SetStackPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetStackPolicyResponsePrivate
 *
 * @brief  Private implementation for SetStackPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetStackPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetStackPolicyResponse instance.
 */
SetStackPolicyResponsePrivate::SetStackPolicyResponsePrivate(
    SetStackPolicyQueueResponse * const q) : SetStackPolicyPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation SetStackPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetStackPolicyResponsePrivate::SetStackPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetStackPolicyResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
