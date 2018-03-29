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

#include "describebudgetsresponse.h"
#include "describebudgetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  DescribeBudgetsResponse
 *
 * @brief  Handles Budgets DescribeBudgets responses.
 *
 * @see    BudgetsClient::describeBudgets
 */

/**
 * @brief  Constructs a new DescribeBudgetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBudgetsResponse::DescribeBudgetsResponse(
        const DescribeBudgetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeBudgetsResponse(new DescribeBudgetsResponsePrivate(this), parent)
{
    setRequest(new DescribeBudgetsRequest(request));
    setReply(reply);
}

const DescribeBudgetsRequest * DescribeBudgetsResponse::request() const
{
    Q_D(const DescribeBudgetsResponse);
    return static_cast<const DescribeBudgetsRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DescribeBudgets response.
 *
 * @param  response  Response to parse.
 */
void DescribeBudgetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBudgetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBudgetsResponsePrivate
 *
 * @brief  Private implementation for DescribeBudgetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBudgetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBudgetsResponse instance.
 */
DescribeBudgetsResponsePrivate::DescribeBudgetsResponsePrivate(
    DescribeBudgetsResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets DescribeBudgetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBudgetsResponsePrivate::parseDescribeBudgetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBudgetsResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
