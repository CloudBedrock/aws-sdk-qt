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

#include "createadditionalassignmentsforhitresponse.h"
#include "createadditionalassignmentsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  CreateAdditionalAssignmentsForHITResponse
 *
 * @brief  Handles MTurk CreateAdditionalAssignmentsForHIT responses.
 *
 * @see    MTurkClient::createAdditionalAssignmentsForHIT
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAdditionalAssignmentsForHITResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateAdditionalAssignmentsForHITResponsePrivate(this), parent)
{
    setRequest(new CreateAdditionalAssignmentsForHITRequest(request));
    setReply(reply);
}

const CreateAdditionalAssignmentsForHITRequest * CreateAdditionalAssignmentsForHITResponse::request() const
{
    Q_D(const CreateAdditionalAssignmentsForHITResponse);
    return static_cast<const CreateAdditionalAssignmentsForHITRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk CreateAdditionalAssignmentsForHIT response.
 *
 * @param  response  Response to parse.
 */
void CreateAdditionalAssignmentsForHITResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAdditionalAssignmentsForHITResponsePrivate
 *
 * @brief  Private implementation for CreateAdditionalAssignmentsForHITResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAdditionalAssignmentsForHITResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAdditionalAssignmentsForHITResponse instance.
 */
CreateAdditionalAssignmentsForHITResponsePrivate::CreateAdditionalAssignmentsForHITResponsePrivate(
    CreateAdditionalAssignmentsForHITQueueResponse * const q) : CreateAdditionalAssignmentsForHITPrivate(q)
{

}

/**
 * @brief  Parse an MTurk CreateAdditionalAssignmentsForHITResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAdditionalAssignmentsForHITResponsePrivate::CreateAdditionalAssignmentsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAdditionalAssignmentsForHITResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
