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

#include "executechangesetresponse.h"
#include "executechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  ExecuteChangeSetResponse
 *
 * @brief  Handles CloudFormation ExecuteChangeSet responses.
 *
 * @see    CloudFormationClient::executeChangeSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ExecuteChangeSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ExecuteChangeSetResponsePrivate(this), parent)
{
    setRequest(new ExecuteChangeSetRequest(request));
    setReply(reply);
}

const ExecuteChangeSetRequest * ExecuteChangeSetResponse::request() const
{
    Q_D(const ExecuteChangeSetResponse);
    return static_cast<const ExecuteChangeSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ExecuteChangeSet response.
 *
 * @param  response  Response to parse.
 */
void ExecuteChangeSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ExecuteChangeSetResponsePrivate
 *
 * @brief  Private implementation for ExecuteChangeSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ExecuteChangeSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ExecuteChangeSetResponse instance.
 */
ExecuteChangeSetResponsePrivate::ExecuteChangeSetResponsePrivate(
    ExecuteChangeSetQueueResponse * const q) : ExecuteChangeSetPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ExecuteChangeSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ExecuteChangeSetResponsePrivate::ExecuteChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteChangeSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
