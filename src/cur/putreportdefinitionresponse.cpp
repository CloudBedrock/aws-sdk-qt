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

#include "putreportdefinitionresponse.h"
#include "putreportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostandUsageReportService {

/**
 * @class  PutReportDefinitionResponse
 *
 * @brief  Handles CostandUsageReportService PutReportDefinition responses.
 *
 * @see    CostandUsageReportServiceClient::putReportDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutReportDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new PutReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new PutReportDefinitionRequest(request));
    setReply(reply);
}

const PutReportDefinitionRequest * PutReportDefinitionResponse::request() const
{
    Q_D(const PutReportDefinitionResponse);
    return static_cast<const PutReportDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a CostandUsageReportService PutReportDefinition response.
 *
 * @param  response  Response to parse.
 */
void PutReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutReportDefinitionResponsePrivate
 *
 * @brief  Private implementation for PutReportDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutReportDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutReportDefinitionResponse instance.
 */
PutReportDefinitionResponsePrivate::PutReportDefinitionResponsePrivate(
    PutReportDefinitionQueueResponse * const q) : PutReportDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an CostandUsageReportService PutReportDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutReportDefinitionResponsePrivate::PutReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReportDefinitionResponse"));
    /// @todo
}

} // namespace CostandUsageReportService
} // namespace AWS
