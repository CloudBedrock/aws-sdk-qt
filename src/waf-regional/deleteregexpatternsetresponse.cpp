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

#include "deleteregexpatternsetresponse.h"
#include "deleteregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  DeleteRegexPatternSetResponse
 *
 * @brief  Handles WAFRegional DeleteRegexPatternSet responses.
 *
 * @see    WAFRegionalClient::deleteRegexPatternSet
 */

/**
 * @brief  Constructs a new DeleteRegexPatternSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRegexPatternSetResponse::DeleteRegexPatternSetResponse(
        const DeleteRegexPatternSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new DeleteRegexPatternSetRequest(request));
    setReply(reply);
}

const DeleteRegexPatternSetRequest * DeleteRegexPatternSetResponse::request() const
{
    Q_D(const DeleteRegexPatternSetResponse);
    return static_cast<const DeleteRegexPatternSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DeleteRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRegexPatternSetResponsePrivate
 *
 * @brief  Private implementation for DeleteRegexPatternSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRegexPatternSetResponse instance.
 */
DeleteRegexPatternSetResponsePrivate::DeleteRegexPatternSetResponsePrivate(
    DeleteRegexPatternSetQueueResponse * const q) : DeleteRegexPatternSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRegexPatternSetResponsePrivate::DeleteRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
