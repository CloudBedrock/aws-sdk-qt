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

#include "deletereportdefinitionresponse.h"
#include "deletereportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostandUsageReportService {

/**
 * @class  DeleteReportDefinitionResponse
 *
 * @brief  Handles CostandUsageReportService DeleteReportDefinition responses.
 *
 * @see    CostandUsageReportServiceClient::deleteReportDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReportDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new DeleteReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteReportDefinitionRequest(request));
    setReply(reply);
}

const DeleteReportDefinitionRequest * DeleteReportDefinitionResponse::request() const
{
    Q_D(const DeleteReportDefinitionResponse);
    return static_cast<const DeleteReportDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a CostandUsageReportService DeleteReportDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReportDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteReportDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReportDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReportDefinitionResponse instance.
 */
DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponsePrivate(
    DeleteReportDefinitionQueueResponse * const q) : DeleteReportDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an CostandUsageReportService DeleteReportDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportDefinitionResponse"));
    /// @todo
}
