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

#include "deprecateworkflowtyperesponse.h"
#include "deprecateworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  DeprecateWorkflowTypeResponse
 *
 * @brief  Handles SWF DeprecateWorkflowType responses.
 *
 * @see    SWFClient::deprecateWorkflowType
 */

/**
 * @brief  Constructs a new DeprecateWorkflowTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeprecateWorkflowTypeResponse::DeprecateWorkflowTypeResponse(
        const DeprecateWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DeprecateWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateWorkflowTypeRequest(request));
    setReply(reply);
}

const DeprecateWorkflowTypeRequest * DeprecateWorkflowTypeResponse::request() const
{
    Q_D(const DeprecateWorkflowTypeResponse);
    return static_cast<const DeprecateWorkflowTypeRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DeprecateWorkflowType response.
 *
 * @param  response  Response to parse.
 */
void DeprecateWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeprecateWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeprecateWorkflowTypeResponsePrivate
 *
 * @brief  Private implementation for DeprecateWorkflowTypeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateWorkflowTypeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeprecateWorkflowTypeResponse instance.
 */
DeprecateWorkflowTypeResponsePrivate::DeprecateWorkflowTypeResponsePrivate(
    DeprecateWorkflowTypeResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF DeprecateWorkflowTypeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeprecateWorkflowTypeResponsePrivate::parseDeprecateWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateWorkflowTypeResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
